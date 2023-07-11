#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7
#define LED8 8

void setup()
{
 pinMode( LED1 , OUTPUT );
 pinMode( LED2 , OUTPUT );
 pinMode( LED3 , OUTPUT );
 pinMode( LED4 , OUTPUT );
 pinMode( LED5 , OUTPUT );
 pinMode( LED6 , OUTPUT );
 pinMode( LED7 , OUTPUT );
 pinMode( LED8 , OUTPUT );
}

void loop()
{
 digitalWrite( LED1 , HIGH );
 digitalWrite( LED2 , LOW );
 delay(500);
 digitalWrite( LED1 , LOW);
 digitalWrite( LED2 , HIGH );
 digitalWrite( LED3, LOW );
 delay(500);
 digitalWrite( LED2 , LOW);
 digitalWrite( LED3 , HIGH );
 digitalWrite( LED4, LOW );
 delay(500);
 digitalWrite( LED3 , LOW);
 digitalWrite( LED4 , HIGH );
 digitalWrite( LED5, LOW );
 delay(500);
 digitalWrite( LED4 , LOW);
 digitalWrite( LED5 , HIGH );
 digitalWrite( LED6, LOW );
 delay(500);
 digitalWrite( LED5 , LOW);
 digitalWrite( LED6 , HIGH );
 digitalWrite( LED7, LOW );
 delay(500);
 digitalWrite( LED6 , LOW);
 digitalWrite( LED7 , HIGH );
 digitalWrite( LED8, LOW );
 delay(500);
 digitalWrite( LED7 , LOW);
 digitalWrite( LED8 , HIGH );
 delay(500);
 digitalWrite( LED8 , LOW );
}