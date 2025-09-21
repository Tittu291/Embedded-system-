#include <Servo.h>

Servo myservo;
int pos = 0; 
const int buttonPin = 2; 
int buttonState = 0; 

void setup() {
  myservo.attach(9); 
  pinMode(buttonPin, INPUT);
} 

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // Sweep from 0 to 180
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);
      delay(15);
    }

    // Sweep back from 180 to 0
    for (pos = 180; pos >= 0; pos -= 1) {
      myservo.write(pos);
      delay(15);
    }
  }
  else {
    // If button not pressed, keep servo at 0
    myservo.write(0);
  }
}
