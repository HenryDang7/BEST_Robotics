// Include Libraries
#include "Claws.h"

// Define Variables to Store Updated Information
int leftClawState = 1; // 0 = Open, 1 = Neutral, 2 = Closed
int rightClawState = 1; // 0 = Open, 1 = Neutral, 2 = Closed

// Define Header's Functions
void updateClaws() {
	// Read the controllers and determine the servo positions
	// Left
	if (joystickGetDigital(1, LEFT_CLAW_BUTTON_GROUP, JOY_LEFT)) {
		leftClawState = 0;

	} else if (joystickGetDigital(1, LEFT_CLAW_BUTTON_GROUP, JOY_DOWN)) {
		leftClawState = 1;

	} else if (joystickGetDigital(1, LEFT_CLAW_BUTTON_GROUP, JOY_RIGHT)) {
		leftClawState = 2;
	}

	// Right
	if (joystickGetDigital(1, RIGHT_CLAW_BUTTON_GROUP, JOY_LEFT)) {
		rightClawState = 2;

	} else if (joystickGetDigital(1, RIGHT_CLAW_BUTTON_GROUP, JOY_DOWN)) {
		rightClawState = 1;

	} else if (joystickGetDigital(1, RIGHT_CLAW_BUTTON_GROUP, JOY_RIGHT)) {
		rightClawState = 0;
	}

	// Set the servo positions
	// Left
	if (leftClawState == 0) {
		motorSet(LEFT_SERVO_PORT, -127);

	} else if (leftClawState == 1) {
		motorSet(LEFT_SERVO_PORT, 0);

	} else {
		motorSet(LEFT_SERVO_PORT, 127);
	}

	// Right
	if (rightClawState == 0) {
		motorSet(RIGHT_SERVO_PORT, 127);

	} else if (rightClawState == 1) {
		motorSet(RIGHT_SERVO_PORT, 0);

	} else {
		motorSet(RIGHT_SERVO_PORT, -127);
	}
}