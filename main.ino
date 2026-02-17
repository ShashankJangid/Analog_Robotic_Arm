#include <Servo.h>


Servo servos[6];


// Servo pins
int servoPins[6] = {11, 10, 9, 6, 5, 3};


// Potentiometer pins
int potPins[6] = {A0, A1, A2, A3, A4, A5};


void setup() {
 for (int i = 0; i < 6; i++) {
   servos[i].attach(servoPins[i]);
 }
}


void loop() {
 for (int i = 0; i < 6; i++) {
   int potValue = analogRead(potPins[i]);   // 0–1023
   int angle = map(potValue, 0, 1023, 0, 180);
   servos[i].write(angle);
 }


 delay(10); // small delay for stability
}
