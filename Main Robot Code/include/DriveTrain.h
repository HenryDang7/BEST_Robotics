#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

#define DEADZONE 15
#define MINIMUM_MOTOR_POWER 20

#define PHASE_SWITCH 0.80
#define PHASE_ONE_MULTIPLIER 0.65

#define LEFT_ANALOG_AXIS 3
#define RIGHT_ANALOG_AXIS 2

#define LEFT_MOTOR_PORT 2
#define RIGHT_MOTOR_PORT 9

#include <API.h>

void updateDriveTrain();
void setRightWheel(int speed);
void setLeftWheel(int speed);

#endif