#ifndef LIFT_H
#define LIFT_H

#define LIFT_SPEED 127

#define UP_BUTTON_GROUP 6
#define DOWN_BUTTON_GROUP 5

#define UP_BUTTON JOY_UP
#define DOWN_BUTTON JOY_DOWN

#define LIFT_MOTOR_PORT 6

#include <API.h>

void updateLift();
void setLift(int speed);

#endif