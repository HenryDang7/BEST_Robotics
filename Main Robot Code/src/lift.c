// Include Libraries
#include "lift.h"

// Define Variables to Store Updated Information
bool leftTriggerIsHeld;
bool rightTriggerIsHeld;

bool leftTriggerWasHeld = false;
bool rightTriggerWasHeld = false;

int currentLiftSpeed = 0;

// Define Header's Functions
void setLift(int speed) {
    motorSet(LIFT_MOTOR_PORT, speed);
}

void updateLift() {
    leftTriggerIsHeld = joystickGetDigital(1, DOWN_BUTTON_GROUP, DOWN_BUTTON);
    rightTriggerIsHeld = joystickGetDigital(1, UP_BUTTON_GROUP, UP_BUTTON);

    if (leftTriggerIsHeld && !leftTriggerWasHeld) {
        leftTriggerWasHeld = true;
        currentLiftSpeed -= LIFT_SPEED;

    } else if (!leftTriggerIsHeld) {
        leftTriggerWasHeld = false;
    }

    if (rightTriggerIsHeld && !rightTriggerWasHeld) {
        rightTriggerWasHeld = true;
        currentLiftSpeed += LIFT_SPEED;

    } else if (!rightTriggerIsHeld) {
        rightTriggerWasHeld = false;
    }

    setLift(currentLiftSpeed);
}