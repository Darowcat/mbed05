#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    uLCD.background_color(0xFFFFFF);
    uLCD.textbackground_color(WHITE);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.printf("\n107061202\n"); //Default Green on black text
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(100ms);
    }
}