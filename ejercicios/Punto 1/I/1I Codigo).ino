#define led1 1
#define led2 2
#define led3 3
#define led4 4
#define led5 5
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11
int boton = 12;
int stateBoton;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  stateBoton = digitalRead(boton);
  if(stateBoton == HIGH){
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led5, HIGH);
    delay(1000);
    digitalWrite(led6, HIGH);
    delay(1000);
    digitalWrite(led7, HIGH);
    delay(1000);
    digitalWrite(led8, HIGH);
    delay(1000);
    digitalWrite(led9, HIGH);
    delay(1000);
    digitalWrite(led10, HIGH);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
  
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
}