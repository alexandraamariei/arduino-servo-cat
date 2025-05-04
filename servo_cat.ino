#include <Servo.h>

Servo servoCap;
Servo servoJosStanga;
Servo servoJosDreapta;
Servo servoSusStanga;
Servo servoSusDreapta;
int const potpin = A0;
int potval;

void setup() 
{
  servoCap.attach(6);
  servoJosStanga.attach(2);
  servoJosDreapta.attach(3);
  servoSusStanga.attach(4);
  servoSusDreapta.attach(5);
  Serial.begin(9600);
}

void loop()
{
  potval = analogRead(potpin);
  Serial.print("potval: ");
  Serial.println(potval);

  int delayTime = map(potval, 0, 1023, 5, 150);

  for (int angle = 90; angle >= 45; angle -= 7) {
    servoCap.write(angle);
    servoJosStanga.write(angle);
    servoJosDreapta.write(angle);
    servoSusStanga.write(angle);
    servoSusDreapta.write(angle);
    delay(delayTime);
  }

  servoCap.write(90);
  servoJosStanga.write(90);
  servoJosDreapta.write(90);
  servoSusStanga.write(90);
  servoSusDreapta.write(90);
  delay(500);

  for (int angle = 110; angle <= 135; angle += 4) {
    servoCap.write(angle);
    servoJosStanga.write(angle);
    servoJosDreapta.write(angle);
    servoSusStanga.write(angle);
    servoSusDreapta.write(angle);
    delay(delayTime);
  }

  servoCap.write(90);
  servoJosStanga.write(90);
  servoJosDreapta.write(90);
  servoSusStanga.write(90);
  servoSusDreapta.write(90);
  delay(500);
}
