
int ledPin = 4;
int swPin = 12;

boolean swPinLast = false;
boolean ledState = false;

void setup ()
{
	Serial.begin(9600);

	pinMode(ledPin, OUTPUT);
	pinMode(swPin, INPUT);

	digitalWrite(ledPin, LOW);
}

void loop ()
{
	boolean state = digitalRead(swPin);

	if (state != swPinLast) {
		Serial.println(state);

		if (state == true) {
			ledState = !ledState;
			if (ledState == true) {
				digitalWrite(ledPin, HIGH);
			} else {
				digitalWrite(ledPin, LOW);
			}
		}

		swPinLast = state;
	}
}
