#include <math.h>
#include <ros/ros.h>
#include <string>
#include "autonomous_msg/PolyfitLaneDataArray.h"
#include "autonomous_msg/VehicleInput.h"
#include "autonomous_msg/VehicleOutput.h"
#include "std_msgs/Float64.h"

class AutonomousDriving
{
protected:
  ros::NodeHandle m_rosNodeHandler;
  ros::Publisher m_rosPubVehicleInput;

  ros::Subscriber m_rosSubVehicleState;
  ros::Subscriber m_rosSubPolyLanes;
  ros::Subscriber m_rosSubDrivingInput;
  ros::Subscriber m_rosLimitSpeed;
  ros::Subscriber m_rosSubLidar;

  ros::Publisher m_rosPubDrivingWay;

  std::string m_vehicle_namespace_param;
  double m_lookAhead_param = 0.0;

public:
  AutonomousDriving()
  {
    m_rosSubVehicleState = m_rosNodeHandler.subscribe(
        "vehicle_output", 10, &AutonomousDriving::vehicleStateCallback, this);

    m_rosPubVehicleInput =
        m_rosNodeHandler.advertise<autonomous_msg::VehicleInput>(
            "vehicle_input", 10);

    m_rosSubPolyLanes = m_rosNodeHandler.subscribe(
        "polyfit_lanes", 10, &AutonomousDriving::polyLanesCallback, this);

    m_rosLimitSpeed = m_rosNodeHandler.subscribe(
        "/limit_speed", 10, &AutonomousDriving::limitSpeedCallback, this);

    m_rosSubDrivingInput = m_rosNodeHandler.subscribe(
        "/driving_input", 10, &AutonomousDriving::drivingInputCallback, this);

    m_rosSubLidar = m_rosNodeHandler.subscribe(
        "/lidar", 10, &AutonomousDriving::lidarSensorCallback, this);

    m_rosPubDrivingWay =
        m_rosNodeHandler.advertise<autonomous_msg::PolyfitLaneData>(
            "driving_way", 10);

    m_rosNodeHandler.param("autonomous_driving/ns", m_vehicle_namespace_param,
                           std::string(""));
    m_rosNodeHandler.param("autonomous_driving/lookAhead", m_lookAhead_param,
                           5.0);
  }

  ~AutonomousDriving() {}

protected:
  autonomous_msg::PolyfitLaneDataArray m_polyLanes;
  autonomous_msg::VehicleInput m_drivingInput;
  autonomous_msg::PolyfitLaneData m_midPolyLane;
  autonomous_msg::VehicleOutput m_vehicleState;
  autonomous_msg::VehicleOutput m_lidarOutput;
  double m_limitSpeed = 0.0;
  bool isLidarDataExist = false;

public:
  /**
   * @brief Temporary functions for debugging pure pursuit
   *
   * @param VehicleInput accel and brake
   */
  void drivingInputCallback(const autonomous_msg::VehicleInput::ConstPtr &msg)
  {
    // m_drivingInput.accel = msg->accel;
    // m_drivingInput.brake = msg->brake;
    // m_drivingInput.steering = msg->steering;
  }

  void vehicleStateCallback(
      const autonomous_msg::VehicleOutput::ConstPtr &msg)
  {
    m_vehicleState = *msg;
  }

  void limitSpeedCallback(const std_msgs::Float64::ConstPtr &msg)
  {
    m_limitSpeed = msg->data;
  }

  void polyLanesCallback(
      const autonomous_msg::PolyfitLaneDataArray::ConstPtr &msg)
  {
    m_polyLanes = *msg;
  }
  void lidarSensorCallback(const autonomous_msg::VehicleOutput::ConstPtr &msg)
  {
    m_lidarOutput = *msg;
    isLidarDataExist = true;
  }

  void controlVehicleSpeed(double targetSpeed_ms)
  {
    if (targetSpeed_ms > m_vehicleState.velocity)
    {
      m_drivingInput.accel = 1.0;
      m_drivingInput.brake = 0.0;
    }
    else
    {
      m_drivingInput.accel = 0.0;
      m_drivingInput.brake = 1.0;
    }
  }

  /**
   * brief: Find the left lane and the right lane, then change to the actual
   * driving lane. input: m_polyLanes output: m_midPolyLane
   */
  void findDrivingWay()
  {
    // TODO
    m_midPolyLane.frame_id = m_vehicle_namespace_param + "/body";
    m_rosPubDrivingWay.publish(m_midPolyLane);

    double a0[2];
    double a1[2];
    double a2[2];
    double a3[2];
    for (auto laneBound : m_polyLanes.polyfitLanes)
    {
      if (laneBound.id == "0") // left lane
      {
        // TODO
        a0[0] = laneBound.a0;
        a1[0] = laneBound.a1;
        a2[0] = laneBound.a2;
        a3[0] = laneBound.a3;
      }
      if (laneBound.id == "1") // right lane
      {
        // TODO
        a0[1] = laneBound.a0;
        a1[1] = laneBound.a1;
        a2[1] = laneBound.a2;
        a3[1] = laneBound.a3;
      }
    }

    m_midPolyLane.a0 = (a0[0] + a0[1]) / 2.;
    m_midPolyLane.a1 = (a1[0] + a1[1]) / 2.;
    m_midPolyLane.a2 = (a2[0] + a2[1]) / 2.;
    m_midPolyLane.a3 = (a3[0] + a3[1]) / 2.;
  }

  /**
   * brief: Find the steering angle for driving in the driving lane.
   * input: m_midPolyLane
   * output: m_drivingInput.steering
   */
  void calcSteeringAngle()
  {
    // TODO
    double a0 = m_midPolyLane.a0;
    double a1 = m_midPolyLane.a1;
    double a2 = m_midPolyLane.a2;
    double a3 = m_midPolyLane.a3;
    double l_x_d = m_lookAhead_param - a2*2;
    double g_x = l_x_d;
    double g_y = (a3*l_x_d*l_x_d*l_x_d) + (a2*l_x_d*l_x_d) + (a1*l_x_d) + (a0);
    double l_d = sqrt(g_x*g_x + g_y*g_y);
    double e_l_d = g_y;
    double L = 1.402 + 1.646;
    double delta = atan2((2*L*e_l_d), (l_d*l_d));
    ROS_INFO("steering angle: %lf\n", delta);
    m_drivingInput.steering = delta;
  }

  void publishVehicleInput() { m_rosPubVehicleInput.publish(m_drivingInput); }
};

int main(int argc, char **argv)
{
  ros::init(argc, argv, "autonomous_driving");

  AutonomousDriving autonomousDriving;

  double prev_csvLaneMarkTime = ros::Time::now().toSec();
  // The approximate control time is 100 Hz
  ros::Rate loop_rate(100);
  while (ros::ok())
  {
    autonomousDriving.controlVehicleSpeed(10.0); // 10m/s
    autonomousDriving.findDrivingWay();
    autonomousDriving.calcSteeringAngle();
    autonomousDriving.publishVehicleInput();

    if ((ros::Time::now().toSec() - prev_csvLaneMarkTime) > 1.0)
    {
      prev_csvLaneMarkTime = ros::Time::now().toSec();
    }
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}