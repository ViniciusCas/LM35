#include "LM35.h"

LM35:LM35(int pinT){
	
	pinMode(pinT, INPUT);

	pinoT = pinT

}

	void celcius(){
		float temperature = (analogRead(pinT)* 0.48828125);
		return temperature;
	}
	
	void fahrenheit(){
		float temperature = (analogRead(pinT)* 0.48828125 * 9/5 + 32);
		return teperature;
	}
	
	void kelvin(){
		temperature = (analogRead(pinT)* 0.48828125 + 273.15);
		return temperature;
	}