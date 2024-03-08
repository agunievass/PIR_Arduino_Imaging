#include <Servo.h>


Servo servo_X;  // create servo object to control a servo
Servo servo_Y;  // create servo object to control a servo

int pos_x = 0;    // variable to store the servo position
int pos_y = 0;

void setup() {
	servo_X.attach(9);  // the pin that the servo is connected, 9
	servo_Y.attach(8);  // the pin that the servo is connected, 8
	//Serial.begin(9600);
	
	servo_X.write(0);
	servo_Y.write(0);
}
void loop() {
	for(int x = 0; x <= 180 ; x += 5){
		servo_X.write(x);
		int reading = analogRead(A0);
		//Serial.println(reading);
		delay(200);
		
		
	

	}







}
