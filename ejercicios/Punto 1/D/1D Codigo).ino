
#define led1 0
#define led2 1
#define buzzer 2
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(buzzer,HIGH);
  delay(200); 
  digitalWrite(buzzer,LOW);
  delay(100);
  digitalWrite(led1,LOW);
   digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(led2,HIGH);
  delay(200); 
  digitalWrite(led2,LOW);
  digitalWrite(buzzer,LOW);
  delay(100);
  digitalWrite(buzzer, HIGH);

}