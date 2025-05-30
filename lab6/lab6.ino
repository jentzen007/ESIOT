#include <Servo.h>

int ServoPin = 9;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(ServoPin);
}

void loop() {
  // put  your main code here, to run repeatedly:
  for (int i = 0; i < 180; i++) {
    servo.write(i);
    delay(15);
  }

  for (int i = 180; i > 0; i--) {
    servo.write(i);
    delay(15);
  }
}
