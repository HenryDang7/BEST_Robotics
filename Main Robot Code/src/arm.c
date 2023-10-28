// Include Libraries
#include "Arm.h"

// Define Variables to Store Updated Information
int motorSpeed = 0;

bool isRaising;
bool isLowering;

bool wasRasing = false;
bool wasLowering = false;

// Define Header's Functions
void setArmSpeed(int speed) {
	motorSet(SPOOL_MOTOR_PORT, speed);
}

void updateArm() {
	isRaising = joystickGetDigital(1, RAISE_BUTTON_GROUP, MAIN_BUTTON);
    isLowering = joystickGetDigital(1, LOWER_BUTTON_GROUP, MAIN_BUTTON);

    if (isRaising && !wasRasing) {
        wasRasing = true;
        motorSpeed -= MAX_SPEED;

    } else if (wasRasing) {
        wasRasing = false;
		motorSpeed += MAX_SPEED;
    }

    if (isLowering && !wasLowering) {
        wasLowering = true;
        motorSpeed += MAX_SPEED;

    } else if (wasLowering) {
        wasLowering = false;
		motorSpeed -= MAX_SPEED;
    }

    setArmSpeed(motorSpeed);
}