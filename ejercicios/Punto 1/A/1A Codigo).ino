#define LED1_R 6
#define LED2_Y 4
#define LED3_G 2

#define LED4_W 7
#define LED5_O 5
void setup()
{
  pinMode( LED1_R , OUTPUT );
  pinMode( LED2_Y , OUTPUT );
  pinMode( LED3_G , OUTPUT );
  pinMode( LED4_W , OUTPUT );
  pinMode( LED5_O , OUTPUT );
}

void loop()
{
  digitalWrite( LED1_R , HIGH);
  digitalWrite( LED4_W , HIGH);
  digitalWrite( LED2_Y , LOW );
  digitalWrite( LED3_G , LOW );
  delay(4000);
  digitalWrite( LED1_R , LOW );
  digitalWrite( LED2_Y , HIGH );
  delay(3000);
  digitalWrite( LED2_Y , LOW );
  digitalWrite( LED4_W , LOW );
  digitalWrite( LED5_O , HIGH );
  digitalWrite( LED3_G , HIGH );
  delay(4000);
  digitalWrite( LED3_G , LOW );
  digitalWrite( LED2_Y , HIGH);
  delay(3000);
}