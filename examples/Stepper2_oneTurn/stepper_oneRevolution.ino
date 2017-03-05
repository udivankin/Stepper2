
/*
 Stepper Motor Control - one turn
 */

 #include <Stepper2.h>

 const int rpm = 20; // max rpm on 28BYJ-48
 int pinOut[4] = { D1, D2, D5, D6 };

 Stepper2 myStepper(pinOut);

 void setup() {
   Serial.begin(115200);
   myStepper.setSpeed(rpm);
 }

 void loop() {
   Serial.println("start");
   myStepper.turn();
   myStepper.stop();
   delay(15 * 1000);
 }
