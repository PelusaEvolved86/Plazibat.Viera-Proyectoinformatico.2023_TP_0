#define led1r 1
#define led1a 2
#define led1v 3

#define led2r 5
#define led2a 6
#define led2v 7

int poteciometro = A0;
int poteVal;
int valor;
void setup()
{
  pinMode(led1r, OUTPUT);
  pinMode(led1a, OUTPUT);
  pinMode(led1v, OUTPUT);
  pinMode(led2r, OUTPUT);
  pinMode(led2r, OUTPUT);
  pinMode(led2r, OUTPUT);
  pinMode(poteciometro, INPUT);
  Serial.begin(9600);
}

void loop()
{
  poteVal = analogRead(poteciometro);
  valor = map(poteVal, 0, 1023, 0, 255);
  analogWrite(led1r,255);
  analogWrite(led1a,0);
  analogWrite(led1v,255);
  delay(valor);
  analogWrite(led1r,0);
  analogWrite(led1a,0);
  analogWrite(led1v,0);
  delay(valor);
  analogWrite(led2a,255);
  analogWrite(led2v,0);
  analogWrite(led2r,255);
  delay(valor);
  analogWrite(led2a,0);
  analogWrite(led2v,0);
  analogWrite(led2r,0);
}