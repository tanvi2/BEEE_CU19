// CODE FOR LED FLASHER//


void setup()
{
  pinMode(13,OUTPUT);
}

void loop()
{
  digitalWrite(13,HIGH);
  dealy(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
