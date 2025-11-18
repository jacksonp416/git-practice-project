#include <Arduino.h>
#include <MeMCore.h>

MeRGBLed led(0,30); 
MeDCMotor motor1(M1);
MeDCMotor motor2(M2);

void stop(){
  motor1.stop();
  motor2.stop();
}

void movelinear(){
  led.setColor(0,255,0);
  led.show();
  motor1.run(100);
  motor2.run(-100);
  delay(1);
  stop();
}

void moverotation(){
  led.setColor(255,0,0);
  led.show();
  motor1.run(100);
  motor2.run(100);
  delay(1);
  stop();
}

void setup() {
movelinear();

}

void loop() {

}