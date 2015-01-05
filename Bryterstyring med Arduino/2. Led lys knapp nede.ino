
int ledPin = 4;
int swPin = 12;

void setup ()
{
	pinMode(ledPin, OUTPUT);
	pinMode(swPin, INPUT);

	digitalWrite(ledPin, LOW);
}

void loop ()
{
	if (digitalRead(swPin) == HIGH) {
		digitalWrite(ledPin, HIGH);
	} else {
		digitalWrite(ledPin, LOW);
	}
}
