#ifndef CHASSIS_H

// Declares and defines the ports of the motors of each wheel
#define LEFT_WHEEL_PORT 2
#define RIGHT_WHEEL_PORT 3

// Declares and defines the minimum motor power required to start moving the robot
#define MINIMUM_MOTOR_POWER 30.0
#define MAXIMUM_MOTOR_POWER 127.0

// Declares the functions in the "chassis.h" header
#define CHASSIS_H

#include <API.h>

void startLeftWheel(int power);
void startRightWheel(int power);

#endif