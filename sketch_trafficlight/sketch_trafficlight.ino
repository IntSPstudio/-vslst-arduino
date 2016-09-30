int switchPinA =8;
int switchPinB =9;
int greenLedPin =10;
int yellowLedPin =11;
int redLedPin =12;

void setup()
{
  pinMode(switchPinA, INPUT);
  pinMode(switchPinB, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(redLedPin, HIGH);
  delay(500);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
}

void loop()
{
  if (digitalRead(switchPinA) == HIGH)
  {
    delay(2000);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    delay(1000);
    digitalWrite(yellowLedPin, HIGH);
    delay(1000);
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    delay(4000);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    delay(1000);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }

  if (digitalRead(switchPinB) == HIGH)
  {
      digitalWrite(greenLedPin, LOW);
      digitalWrite(yellowLedPin, LOW);
      digitalWrite(redLedPin, LOW);
  }
}
