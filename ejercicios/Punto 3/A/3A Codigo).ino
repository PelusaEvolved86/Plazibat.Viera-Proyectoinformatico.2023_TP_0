#define led1r 8
#define led1a 9
#define led1v 10

#define led2r 7
#define led2a 6
#define led2v 5

#define led3r 2
#define led3a 3
#define led3v 4

int buzzer = 13;

void setup()
{
  pinMode(led1r, OUTPUT);
  pinMode(led1a, OUTPUT);
  pinMode(led1v, OUTPUT);
  pinMode(led2r, OUTPUT);
  pinMode(led2a, OUTPUT);
  pinMode(led2v, OUTPUT);
  pinMode(led3r, OUTPUT);
  pinMode(led3a, OUTPUT);
  pinMode(led3v, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  analogWrite(led1r,255);
  analogWrite(led3r,255);
  analogWrite(led2r,255);
  analogWrite(led2a,255);
  analogWrite(led2v,255);
  digitalWrite(buzzer, HIGH);
  delay(1000);
  analogWrite(led1r,0);
  analogWrite(led3r,0);
  analogWrite(led2r,0);
  analogWrite(led2a,0);
  analogWrite(led2v,0);
  digitalWrite(buzzer, LOW);
  delay(1000);
  digitalWrite(buzzer, HIGH);
  analogWrite(led1r, 255);
  analogWrite(led1a, 255);
  analogWrite(led1v, 255);
  analogWrite(led2r, 255);
  analogWrite(led3r, 255);
  analogWrite(led3a, 255);
  analogWrite(led3v, 255);
  delay(1000);
  digitalWrite(buzzer, LOW);
  analogWrite(led1r, 0);
  analogWrite(led1a, 0);
  analogWrite(led1v, 0);
  analogWrite(led2r, 0);
  analogWrite(led3r, 0);
  analogWrite(led3a, 0);
  analogWrite(led3v, 0);
  delay(1000);
}