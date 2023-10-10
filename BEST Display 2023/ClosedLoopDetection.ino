#include <Keyboard.h>

const int INPUT_PIN = 2;

bool closedLoop = false;
bool previouslyPressed = false;

void setup() {
  pinMode(INPUT_PIN, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {
  closedLoop = !digitalRead(INPUT_PIN);

  if (closedLoop && !previouslyPressed) {
    Keyboard.println("HIT");
    previouslyPressed = true;

  }  else if (!closedLoop && previouslyPressed) {
    previouslyPressed = false;
  }

  delay(20);
}