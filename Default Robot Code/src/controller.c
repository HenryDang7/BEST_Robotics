// This file defines the functions within the "controller.h" header
#include "controller.h"

// Define Simplified Joystick Inputs
int controllerGetLeftJoystickVertical() {
    return joystickGetAnalog(MAIN_CONTROLLER, LEFT_JOYSTICK_VERTICAL);
}

int controllerGetLeftJoystickHorizontal() {
    return joystickGetAnalog(MAIN_CONTROLLER, LEFT_JOYSTICK_HORIZONTAL);
};

bool controllerGetLeftButtonUp() {
    return joystickGetDigital(MAIN_CONTROLLER, LEFT_BUTTON_GROUP, JOY_UP);
}

bool controllerGetLeftButtonDown() {
    return joystickGetDigital(MAIN_CONTROLLER, LEFT_BUTTON_GROUP, JOY_DOWN);
}

bool controllerGetLeftButtonLeft() {
    return joystickGetDigital(MAIN_CONTROLLER, LEFT_BUTTON_GROUP, JOY_LEFT);
}

bool controllerGetLeftButtonRight() {
    return joystickGetDigital(MAIN_CONTROLLER, LEFT_BUTTON_GROUP, JOY_RIGHT);
}

bool controllerGetLeftTriggerUp() {
    return joystickGetDigital(MAIN_CONTROLLER, LEFT_TRIGGER, JOY_UP);
}

bool controllerGetLeftTriggerDown() {
    return joystickGetDigital(MAIN_CONTROLLER, LEFT_TRIGGER, JOY_DOWN);
}

/* ---------------------------------------- */

int controllerGetRightJoystickVertical() {
    return joystickGetAnalog(MAIN_CONTROLLER, RIGHT_JOYSTICK_VERTICAL);
}

int controllerGetRightJoystickHorizontal() {
    return joystickGetAnalog(MAIN_CONTROLLER, RIGHT_JOYSTICK_HORIZONTAL);
}

bool controllerGetRightButtonUp() {
    return joystickGetDigital(MAIN_CONTROLLER, RIGHT_BUTTON_GROUP, JOY_UP);
}

bool controllerGetRightButtonDown() {
    return joystickGetDigital(MAIN_CONTROLLER, RIGHT_BUTTON_GROUP, JOY_DOWN);
}

bool controllerGetRightButtonLeft() {
    return joystickGetDigital(MAIN_CONTROLLER, RIGHT_BUTTON_GROUP, JOY_LEFT);
}

bool controllerGetRightButtonRight() {
    return joystickGetDigital(MAIN_CONTROLLER, RIGHT_BUTTON_GROUP, JOY_RIGHT);
}

bool controllerGetRightTriggerUp() {
    return joystickGetDigital(MAIN_CONTROLLER, RIGHT_TRIGGER, JOY_UP);
}

bool controllerGetRightTriggerDown() {
    return joystickGetDigital(MAIN_CONTROLLER, RIGHT_TRIGGER, JOY_DOWN);
}