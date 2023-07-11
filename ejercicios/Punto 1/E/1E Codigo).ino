#define led1R 3
#define led1B 2
#define led1G 1
#define led2R 5
#define led2B 6
#define led2G 7

void setup()
{ 
  pinMode(led1R, OUTPUT);
  pinMode(led1B, OUTPUT);
  pinMode(led1G, OUTPUT);
  pinMode(led2R, OUTPUT);
  pinMode(led2B, OUTPUT);
  pinMode(led2G, OUTPUT);
}

void loop()
{ // Rojo
  digitalWrite(led1R, HIGH);
  delay(1000);
  // Cian
  digitalWrite(led1R, LOW);
  digitalWrite(led1B, HIGH);
  digitalWrite(led1G, HIGH);
  delay(1000);
  // Verde
  digitalWrite(led1R, LOW);
  digitalWrite(led1B, LOW);
  digitalWrite(led1G, HIGH);
  delay(1000);
  // Magenta
  digitalWrite(led1R, HIGH);
  digitalWrite(led1B, HIGH);
  digitalWrite(led1G, LOW);  
  delay(1000);
  // Azul
  digitalWrite(led1R, LOW);
  digitalWrite(led1B, HIGH);
  digitalWrite(led1G, LOW);
  delay(1000);
  // Blanco
  digitalWrite(led1R, HIGH);
  digitalWrite(led1B, HIGH);
  digitalWrite(led1G, HIGH);
  delay(1000);
  digitalWrite(led1R, LOW);
  digitalWrite(led1B, LOW);
  digitalWrite(led1G, LOW);
  
  
  // Secuencia Led2
  
  digitalWrite(led2R, HIGH);
  delay(1000);
  // Cian
  digitalWrite(led2R, LOW);
  digitalWrite(led2B, HIGH);
  digitalWrite(led2G, HIGH);
  delay(1000);
  // Verde
  digitalWrite(led2R, LOW);
  digitalWrite(led2B, LOW);
  digitalWrite(led2G, HIGH);
  delay(1000);
  // Magenta
  digitalWrite(led2R, HIGH);
  digitalWrite(led2B, HIGH);
  digitalWrite(led2G, LOW);  
  delay(1000);
  // Azul
  digitalWrite(led2R, LOW);
  digitalWrite(led2B, HIGH);
  digitalWrite(led2G, LOW);
  delay(1000);
  // Blanco
  digitalWrite(led2R, HIGH);
  digitalWrite(led2B, HIGH);
  digitalWrite(led2G, HIGH);
  delay(1000);
  digitalWrite(led2R, LOW);
  digitalWrite(led2B, LOW);
  digitalWrite(led2G, LOW);
}
