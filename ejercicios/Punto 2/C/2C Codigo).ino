#define ledv 4
#define leda 3
#define ledr 2
void setup()
{
  pinMode(ledv, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledr, OUTPUT);
}

void loop()
{
  analogWrite(ledr, 255);
  delay(100);
  analogWrite(ledr, 0);
  delay(100);
  analogWrite(ledr, 255);
  analogWrite(ledv, 255);
  delay(100);
  analogWrite(ledr, 0);
  analogWrite(ledv, 0);
  delay(100);
  analogWrite(ledv, 255);
  analogWrite(leda, 255);
  delay(100);
  analogWrite(ledv, 0);
  analogWrite(leda, 0);
  delay(100);
}