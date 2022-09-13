// This file defines the functions within the "robot.h" header
#include "robot.h"
#include "chassis.h"
#include "controller.h"

// Declare and Define Important Values for Fluent Driving
const double FIRST_STAGE_SLOPE = FIRST_STAGE_POWER_MULTIPLIER * ((MAXIMUM_MOTOR_POWER - MINIMUM_MOTOR_POWER) / (MAXIMUM_MOTOR_POWER - CONTROLLER_DEADLOCK));

const double SECOND_STAGE_STARTING_ANALOG = CONTROLLER_DEADLOCK + (SECOND_STAGE_STARTING_PERCENTAGE * (MAXIMUM_MOTOR_POWER - CONTROLLER_DEADLOCK));
const double SECOND_STAGE_STARTING_MOTOR_POWER = FIRST_STAGE_SLOPE * (SECOND_STAGE_STARTING_ANALOG - CONTROLLER_DEADLOCK) + MINIMUM_MOTOR_POWER;
const double SECOND_STAGE_SLOPE = (MAXIMUM_MOTOR_POWER - SECOND_STAGE_STARTING_MOTOR_POWER) / (MAXIMUM_JOYSTICK_ANALOG_VALUE - SECOND_STAGE_STARTING_ANALOG);

// Declare Dynamic Variables for Resource Management
int currentLeftAnalog;
int leftAnalog;

int currentRightAnalog;
int rightAnalog;

int leftWheelPower;
int rightWheelPower;

void updateMovement() {

    // Update Current Controller Values
    currentLeftAnalog = controllerGetLeftJoystickVertical();
    leftAnalog = abs(currentLeftAnalog);

    currentRightAnalog = controllerGetRightJoystickVertical();
    rightAnalog = abs(currentRightAnalog);

    // Calculate the Left Wheel's Power
    if (leftAnalog >= SECOND_STAGE_STARTING_ANALOG) {
        leftWheelPower = SECOND_STAGE_SLOPE * (leftAnalog - SECOND_STAGE_STARTING_ANALOG) + SECOND_STAGE_STARTING_MOTOR_POWER;

    } else if (leftAnalog >= CONTROLLER_DEADLOCK) {
        leftWheelPower = FIRST_STAGE_SLOPE * (leftAnalog - CONTROLLER_DEADLOCK) + MINIMUM_MOTOR_POWER;

    } else {
        leftWheelPower = 0;
    }

    // Calculate the Right Wheel's Power
    if (rightAnalog >= SECOND_STAGE_STARTING_ANALOG) {
        rightWheelPower = SECOND_STAGE_SLOPE * (rightAnalog - SECOND_STAGE_STARTING_ANALOG) + SECOND_STAGE_STARTING_MOTOR_POWER;

    } else if (rightAnalog >= CONTROLLER_DEADLOCK) {
        rightWheelPower = FIRST_STAGE_SLOPE * (rightAnalog - CONTROLLER_DEADLOCK) + MINIMUM_MOTOR_POWER;

    } else {
        rightWheelPower = 0;
    }

    // Calculate Speed For Desired Direction
    if (currentLeftAnalog < 0) {
        leftWheelPower *= -1;
    }

    if (currentRightAnalog < 0) {
        rightWheelPower *= -1;
    }

    // Set Wheel Speeds
    startLeftWheel(leftWheelPower);
    startRightWheel(rightWheelPower);
}

int getCurrentLeftWheelPower() {
    return leftWheelPower;
}
int getCurrentRightWheelPower() {
    return rightWheelPower;
}