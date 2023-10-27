// Included required libraries
#include <Keyboard.h>

// Define physical constants
const int GAME_PIN = 2;
const int RESET_PIN = 9;

// Declare and initialize variables
bool gameLoopPreviouslyClosed = false;
bool resetLoopPreviouslyClosed = false;

bool gameLoopClosed;
bool resetLoopClosed;

// Setup the pinmodes with pull up resistors
void setup() {
  pinMode(GAME_PIN, INPUT_PULLUP);
  pinMode(RESET_PIN, INPUT_PULLUP);

  Keyboard.begin();
}

// Define the controller loop
void loop() {
  // Read the pins' current status
  gameLoopClosed = !digitalRead(GAME_PIN);
  resetLoopClosed = !digitalRead(RESET_PIN);

  // Detect if a closed loop was recently made with the game pin
  if (gameLoopClosed && !gameLoopPreviouslyClosed) {
    gameLoopPreviouslyClosed = true;

    // Send keystrokes to the computer and delay all actions by one second
    Keyboard.println("HIT");
    delay(1000);

  } else if (!gameLoopClosed) {
    gameLoopPreviouslyClosed = false;
  }

  // Detect if a closed loop was recently made with the reset pin
  if (resetLoopClosed && !resetLoopPreviouslyClosed) {
    resetLoopPreviouslyClosed = true;

    // Send keystrokes to the computer and reset the game
    Keyboard.println("RESET");

  } else if (!resetLoopClosed) {
    resetLoopPreviouslyClosed = false;
  }
}