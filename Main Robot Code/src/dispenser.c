// Include Libraries
#include "dispenser.h"

// Define Variables to Store Updated Information
bool buttonWasPressed = false;
bool buttonIsPressed;

// Define Header's Functions
void activateDispenser() {
    motorSet(SERVO_PORT, SERVO_ANGLE);
    delay(DELAY);
    motorSet(SERVO_PORT, 0);
}

void updateDispenser() {
    buttonIsPressed = joystickGetDigital(1, BUTTON_GROUP, BUTTON);

    if (buttonIsPressed && !buttonWasPressed) {
        buttonWasPressed = true;
        activateDispenser();

    } else if (!buttonIsPressed) {
        buttonWasPressed = false;
    }
}