#ifndef DISPENSER_H
#define DISPENSER_H

#define SERVO_ANGLE 90
#define DELAY 10

#define BUTTON_GROUP 8
#define BUTTON JOY_RIGHT

#define SERVO_PORT 5

#include <API.h>

void updateDispenser();
void activateDispenser();

#endif