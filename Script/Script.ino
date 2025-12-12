#include <Keyboard.h>

void setup() {
  // 1. Begin Keyboard emulation
  Keyboard.begin();
  delay(1000); // Wait for drivers to load

  // 2. Open Run Dialog (Windows Key + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(500);

  // 3. Type payload (e.g., open Notepad)
  Keyboard.print("notepad.exe");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1000); // Wait for Notepad to open

  // 4. Type the "Malicious" Message
  Keyboard.print("You have been hacked by R4!");
}

void loop() {
  // Do nothing securely
}