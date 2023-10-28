#ifndef ARM_H
#define ARM_H

#define RAISE_BUTTON_GROUP 5
#define LOWER_BUTTON_GROUP 6
#define MAIN_BUTTON JOY_UP

#define SPOOL_MOTOR_PORT 3

#define MAX_SPEED 127

#include <API.h>

void updateArm();
void setArmSpeed(int speed);

#endif
