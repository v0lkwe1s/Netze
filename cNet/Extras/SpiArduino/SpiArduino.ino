#include <Wire.h>
 
 //OUTPUT
 //number = 1 -> Do Nothing
 //number = 2 -> Do Nothing
 //number = 3 -> PWM -> 3|value
 //number = 4 -> DIGITAL -> 4|STATE
 //number = 5 -> PWM -> 5|value
 //number = 6 -> PWM -> 6|value
 //number = 7 -> DIGITAL -> 7|STATE
 //number = 8 -> DIGITAL -> 8|STATE
 //number = 9 -> PWM -> 9|value
 //number = 10 -> PWM -> 10|value
 //number = 11 -> PWM -> 11|value
 //number = 12 -> DIGITAL -> 12|STATE
 //number = 13 -> DIGITAL -> 13|STATE
 
 //INPUT
 //number = A0 <- ADC -> A0
 //number = A1 <- ADC -> A1
 //number = A2 <- ADC -> A2
 //number = A3 <- ADC -> A3

// callback for received data

 
#define SLAVE_ADDRESS 0x04
char number = 0;
 
void setup() {
	pinMode(13, OUTPUT);
// initialize i2c as slave
	Wire.begin(SLAVE_ADDRESS);
	Serial.begin(9600);
 // define callbacks for i2c communication
	Wire.onReceive(receiveData);
	Wire.onRequest(sendData);
}
 
void loop() {
	delay(100);
}
 

void receiveData(int byteCount){
 
	while(Wire.available()) {
		number = Wire.read();
		Serial.println(number);
		
	}
}
 
// callback for sending data
void sendData(){
	Wire.write(number);
} 
