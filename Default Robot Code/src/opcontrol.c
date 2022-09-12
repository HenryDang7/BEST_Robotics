 /*
  * This file should define the "operatorControl()" function.
  * The "operatorControl()" function defines the control code of the robot.
  *
  * Important Information:
  * The function must include an infinite loop so that it can constantly be updating values/variables.
  * It is important to utilize the "delay()" or "taskDelayUntil()" in order to not starve the Cortex of its resources
  *
  * Note: When the robot is disconnected and then reconnected—by either turning
  * it off and on or through the loss of communications—the function will be recalled,
  * meaning it does not resume where it left off.
  */

// Include Important Headers
#include "main.h"
#include "controller.h"
#include "chassis.h"

// Define Constants (See Us For More Info)
const double POWER_COEFFICIENT = (127.0 - MINIMUM_MOTOR_POWER) / (127.0 - CONTROLLER_DEADLOCK); // We use this coefficient to compensate for the joystick not starting at 0

// Define the "operatorControl()" Function
void operatorControl() {

  // Declare Power Values of the Left and Right Wheel
  int leftWheelPower;
  int rightWheelPower;

  // Declare an Infinite Loop to Constantly Update During the Match
	while (1) {

    // Calculate the Left Wheel's Power Starting at the Deadlock Value
    if (abs(controllerGetLeftJoystickVertical()) >= CONTROLLER_DEADLOCK) {
      leftWheelPower = controllerGetLeftJoystickVertical() * POWER_COEFFICIENT;
    } else {
      leftWheelPower = 0;
    }

    // Add Minimum Motor Power to the Left Wheel (Using If-Statements in Case the Value is Negative)
    if (leftWheelPower < 0) {
      leftWheelPower -= MINIMUM_MOTOR_POWER;
    } else if (leftWheelPower > 0) {
      leftWheelPower += MINIMUM_MOTOR_POWER;
    }

    // Calculate the Right Wheel's Power Starting at the Deadlock Value
    if (abs(controllerGetRightJoystickVertical()) >= CONTROLLER_DEADLOCK) {
      rightWheelPower = controllerGetRightJoystickVertical() * POWER_COEFFICIENT;
    } else {
      rightWheelPower = 0;
    }

    // Add Minimum Motor Power to the Right Wheel (Using If-Statements in Case the Value is Negative)
    if (rightWheelPower < 0) {
      rightWheelPower -= MINIMUM_MOTOR_POWER;
    } else if (leftWheelPower > 0) {
      rightWheelPower += MINIMUM_MOTOR_POWER;
    }

    // Set wheel speeds
    startLeftWheel(leftWheelPower);
    startRightWheel(rightWheelPower);

    delay(20);
	}
}
