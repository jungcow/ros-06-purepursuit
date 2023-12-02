#!/bin/sh
gnome-terminal   -e  " roslaunch pure_proj_autonomous_driving manual_driving.launch " &
sleep 3
gnome-terminal   -e  " roslaunch pure_proj_simulator simulation.launch "