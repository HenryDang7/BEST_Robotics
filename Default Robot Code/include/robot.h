#ifndef ROBOT_H

// Declares and defines important movement constants
#define FIRST_STAGE_POWER_MULTIPLIER 0.65
#define SECOND_STAGE_STARTING_PERCENTAGE 0.85

// Declares the functions in the "robot.h" header
#define ROBOT_H

#include <API.h>
#include "chassis.h"
#include "controller.h"

void updateMovement();
int getCurrentLeftWheelPower();
int getCurrentRightWheelPower();

#endif