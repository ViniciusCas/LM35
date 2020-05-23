#ifndef LM35
#define LM35
#include <Arduino.h>

class LM35{
	private: int pinoT;
		
	public: LM35(int pinT);

	void kelvin();
	void celcius();
	void fahrenheit();
			
	}

#endif