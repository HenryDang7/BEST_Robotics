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
#include "robot.h"

// Define the "operatorControl()" Function
void operatorControl() {

  // Declare an Infinite Loop to Constantly Update During the Match
	while (1) {
    updateMovement();
    delay(20);
	}
}
