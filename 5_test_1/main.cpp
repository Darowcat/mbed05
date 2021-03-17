#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7); // RS, E, DB4-DB7

int main()
{
      int x=30;
      lcd.printf("107061202\n");
      while(true)
      {
            //led = !led;             // toggle led
            lcd.locate(5,1);
            lcd.printf("%5i",x);    //counter display
            ThisThread::sleep_for(1s);
            if (x <= 0){
                x = 30;
            } else {
                x--;
            }
      }
}