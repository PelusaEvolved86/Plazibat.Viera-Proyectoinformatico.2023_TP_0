#define ledR 1
#define ledB 2
#define ledG 3
#define boton 4
void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{

	int valor = digitalRead(boton);
    if ( valor != HIGH )
    {
  		digitalWrite(ledR, HIGH);
   		digitalWrite(ledB, LOW);
    	digitalWrite(ledG, LOW);
  		delay(1000);  Wait for 1000 millisecond(s)
  		digitalWrite(ledR, LOW);
    	digitalWrite(ledB, HIGH);
    	digitalWrite(ledG, HIGH);
  		delay(1000);  Wait for 1000 millisecond(s)
        digitalWrite(ledR, LOW);
    	digitalWrite(ledB, LOW);
    	digitalWrite(ledG, HIGH);
        delay(1000);  Wait for 1000 millisecond(s)
        digitalWrite(ledR, HIGH);
    	digitalWrite(ledB, HIGH);
    	digitalWrite(ledG, LOW);
      	delay(1000);  Wait for 1000 millisecond(s)
      	digitalWrite(ledR, LOW);
    	digitalWrite(ledB, HIGH);
    	digitalWrite(ledG, LOW);
      	delay(1000);  Wait for 1000 millisecond(s)
        digitalWrite(ledR, HIGH);
    	digitalWrite(ledB, HIGH);
    	digitalWrite(ledG, HIGH);
      	delay(1000);  Wait for 1000 millisecond(s)
      	digitalWrite(ledR, HIGH);
    	digitalWrite(ledB, LOW);
    	digitalWrite(ledG, HIGH);
        delay(1000);  Wait for 1000 millisecond(s)
    }
}