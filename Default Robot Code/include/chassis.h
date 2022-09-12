#ifndef CHASSIS_H

#include <API.h>

// Declares and defines the ports of the motors of each wheel
#define LEFT_WHEEL_PORT 2
#define RIGHT_WHEEL_PORT 3

// Declares and defines the minimum motor power required to start moving the robot
#define MINIMUM_MOTOR_POWER 30

// Declares the functions in the "chassis.h" header
#define CHASSIS_H

void startLeftWheel(int power);
void startRightWheel(int power);

#endif