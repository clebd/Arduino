float tempC;
int reading;
int tempPin = 0;

void setup()
{
  Serial.begin(9600);
analogReference(INTERNAL);

}

void loop()
{
reading = analogRead(tempPin);
tempC = reading / 9.31;

Serial.print(tempC);
delay(3000);
}

