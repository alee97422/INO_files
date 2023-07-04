#include <Keyboard.h>

void setup() {
  // Initialize Keyboard
  Keyboard.begin();

  // Delay for the computer to recognize the device
  delay(2000);

  // Send keyboard shortcut to open Google Chrome
  Keyboard.press(KEY_LEFT_GUI);  // 'Windows' key
  Keyboard.press('r');           // 'r' key
  Keyboard.releaseAll();
  delay(500);
  Keyboard.println("chrome");

  // Delay for the browser to open
  delay(4500);

  Keyboard.press(KEY_F11);
  Keyboard.releaseAll();


  // Send keyboard shortcut to open Developer Tools
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('i');
  Keyboard.releaseAll();

  // Delay for the Developer Tools to open
  delay(1500);

  // Send keyboard shortcut to switch to Console tab
  Keyboard.press(KEY_RIGHT_ARROW);
  Keyboard.releaseAll();

  // Delay for the Console tab to activate
  delay(2500);

  // Send JavaScript code to the Console
  Keyboard.println("window.alert(\"YOU ARE AN ABSOLUTE PIECE OF GARBAGE MY DUDE!\");");

  // Wait for the alert to display
  delay(3000);

  // Stop the keyboard
  Keyboard.end();
}

void loop() {
  // Empty loop
}
