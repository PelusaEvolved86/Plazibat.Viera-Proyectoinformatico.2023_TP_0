#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7

void setup()
{
  pinMode( LED1 , OUTPUT );
  pinMode( LED2 , OUTPUT );
  pinMode( LED3 , OUTPUT );
  pinMode( LED4 , OUTPUT );
  pinMode( LED5 , OUTPUT );
  pinMode( LED6 , OUTPUT );
}

void loop()
{
  digitalWrite( LED1 , HIGH );
  digitalWrite( LED2 , LOW );
  digitalWrite( LED3 , HIGH );
  digitalWrite( LED4 , LOW );
  digitalWrite( LED5 , HIGH );
  digitalWrite( LED6 , LOW );
  delay(500);
  digitalWrite( LED1 , LOW );
  digitalWrite( LED2 , HIGH );
  digitalWrite( LED3 , LOW );
  digitalWrite( LED4 , HIGH );
  digitalWrite( LED5 , LOW );
  digitalWrite( LED6 , HIGH );
  delay(500);
}