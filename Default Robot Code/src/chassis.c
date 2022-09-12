// This file defines the functions within the "chassis.h" header

#include "chassis.h"

void startLeftWheel(int power) {
    motorSet(LEFT_WHEEL_PORT, power);
}

void startRightWheel(int power) {
    motorSet(RIGHT_WHEEL_PORT, -power);
}