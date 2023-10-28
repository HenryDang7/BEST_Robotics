#include "Main.h"

void operatorControl() {
	while (true) {
		updateDriveTrain();
		updateArm();
		updateClaws();
		
		delay(20);
	}
}