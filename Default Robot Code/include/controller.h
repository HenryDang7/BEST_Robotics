#ifndef CONTROLLER_H

#include <API.h>

// Declares and defines the main Joystick (Controller)
#define MAIN_CONTROLLER 1

// Declares and defines settings for certain controller functions and operations
#define CONTROLLER_DEADLOCK 15

// Declares and defines the axis of inputs on the controller's left
#define LEFT_JOYSTICK_VERTICAL 3
#define LEFT_JOYSTICK_HORIZONTAL 4

#define LEFT_BUTTON_GROUP 7

#define LEFT_TRIGGER 5

// Declares and defines the axis of inputs on the controller's right
#define RIGHT_JOYSTICK_VERTICAL 2
#define RIGHT_JOYSTICK_HORIZONTAL 1

#define RIGHT_BUTTON_GROUP 8

#define RIGHT_TRIGGER 6

// Declares the functions in the "controller.h" header
#define CONTROLLER_H

// Declare functions to simplify controller inputs
int controllerGetLeftJoystickVertical();
int controllerGetLeftJoystickHorizontal();

bool controllerGetLeftButtonUp();
bool controllerGetLeftButtonDown();
bool controllerGetLeftButtonLeft();
bool controllerGetLeftButtonRight();

bool controllerGetLeftTriggerUp();
bool controllerGetLeftTriggerDown();

/* ---------------------------------------- */

int controllerGetRightJoystickVertical();
int controllerGetRightJoystickHorizontal();

bool controllerGetRightButtonUp();
bool controllerGetRightButtonDown();
bool controllerGetRightButtonLeft();
bool controllerGetRightButtonRight();

bool controllerGetRightTriggerUp();
bool controllerGetRightTriggerDown();

#endif