int switchPinA =7;
int redLedPinA =8;
int redLedPinB =9;
int redLedPinC =10;
int redLedPinMode =0;
int redLedCDelay =50;

void setup()
{
  pinMode(switchPinA, INPUT);
  pinMode(redLedPinA, OUTPUT);
  pinMode(redLedPinB, OUTPUT);
  pinMode(redLedPinC, OUTPUT);
  
  digitalWrite(redLedPinA, HIGH);
  digitalWrite(redLedPinB, HIGH);
  digitalWrite(redLedPinC, HIGH);
  delay(500);
  digitalWrite(redLedPinA, LOW);
  digitalWrite(redLedPinB, LOW);
  digitalWrite(redLedPinC, LOW);
}

void loop()
{
  if (digitalRead(switchPinA) == HIGH)
  {
    if (redLedPinMode !=1)
    {
      redLedPinMode =1;
    }
    else
    {
      redLedPinMode =0;
    }
  }
  
  delay(100);
  
  if (redLedPinMode ==0)
  {
    digitalWrite(redLedPinA, LOW);
    digitalWrite(redLedPinB, LOW);
    digitalWrite(redLedPinC, LOW);
  }
  
  if (redLedPinMode ==1)
  {
    digitalWrite(redLedPinA, HIGH);
    delay(redLedCDelay);
    digitalWrite(redLedPinA, LOW);
    digitalWrite(redLedPinB, HIGH);
    delay(redLedCDelay);
    digitalWrite(redLedPinB, LOW);
    digitalWrite(redLedPinC, HIGH);
    delay(redLedCDelay);
    digitalWrite(redLedPinC, LOW);
    digitalWrite(redLedPinB, HIGH);
    delay(redLedCDelay);
    digitalWrite(redLedPinB, LOW);
    digitalWrite(redLedPinA, HIGH);
  }
}
