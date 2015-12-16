#include <servo.h>
#include <bervo.h>
bervo lol(-2);
void setup() {
	lol.attach(12);
}

void loop() {
	lol.rotate(70);
	delay(10000);
	lol.stop();
}
