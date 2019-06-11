#include<stdio.h>
#include <LCD.h>
#define LEDD 4
#define LEDR 5
LCD lcd(31, 32, 33);
int bp1 = 8;
int bp2 = 9;
int bp3 = 40;
int bp4 = 41;
int zl=30;
int jr=15;
void setup()
{
    // put your setup code here, to run once:
    pinMode(LEDD, OUTPUT);
    pinMode(LEDR, OUTPUT);
    pinMode(bp1, INPUT);
    pinMode(bp2, INPUT);
    pinMode(bp3, INPUT);
    pinMode(bp4, INPUT);
    lcd.initial_LCD1602();
}

void loop()
{
    // put your main code here, to run repeatedly:
    int y;
    y=analogRead(A0);
    y=y/25;
    lcd.SET_XY(3, 0);
    lcd.Write_data(y); //第2行，第3个地址起,打印str2
    delay(100);
    lcd.clear();
    lcd.SET_XY(6, 1);
    lcd.Write_data(jr); //第1行，第3个地址起,打印str2
    lcd.SET_XY(9, 1);
    lcd.Write_data(zl);
    /*int w=255;

    digitalWrite(LEDD, w);   // turn the LED on (HIGH is the voltage level)
    lcd.SET_XY(3, 1);
    lcd.Write_data(w); //第2行，第3个地址起,打印str2
    delay(1000);                       // wait for a second
    w=0;
    digitalWrite(LEDD, w);    // turn the LED off by making the voltage LOW
    lcd.SET_XY(3, 1);
    lcd.Write_data(w); //第2行，第3个地址起,打印str2
    delay(1000);
    w=255;
    digitalWrite(LEDR, w);
    lcd.SET_XY(3, 1);
    lcd.Write_data(w); //第2行，第3个地址起,打印str2
    delay(1000);// wait for a second
    w=0;
    digitalWrite(LEDR, w);    // turn the LED off by making the voltage LOW
    lcd.SET_XY(3, 1);
    lcd.Write_data(w); //第2行，第3个地址起,打印str2
    delay(1000); */
    int b1=0;
    int b2=0;
    int b3=0;
    int b4=0;
    b1 = digitalRead(bp1);
    b2 = digitalRead(bp2);
    b3 = digitalRead(bp3);
    b4 = digitalRead(bp4);
    lcd.SET_XY(6, 1);
    lcd.Write_data(jr); //第1行，第3个地址起,打印str2

    lcd.SET_XY(9, 1);
    lcd.Write_data(zl);

    while(y<jr)
    {
        digitalWrite(LEDR, 255);
        y=analogRead(A0);
        y=y/25;
        lcd.SET_XY(3, 0);
        lcd.Write_data(y); //第2行，第3个地址起,打印str2
        delay(100);
        lcd.clear();
        lcd.SET_XY(6, 1);
        lcd.Write_data(jr); //第1行，第3个地址起,打印str2
        lcd.SET_XY(9, 1);
        lcd.Write_data(zl);

    }
    if(y>=jr+2)
    {
        digitalWrite(LEDR, 0);
        y=analogRead(A0);
        y=y/25;
        lcd.SET_XY(3, 0);
        lcd.Write_data(y); //第2行，第3个地址起,打印str2
        delay(100);
        lcd.clear();
        lcd.SET_XY(6, 1);
        lcd.Write_data(jr); //第1行，第3个地址起,打印str2
        lcd.SET_XY(9, 1);
        lcd.Write_data(zl);
    }
    while(y>zl)
    {
        digitalWrite(LEDD, 255);
        y=analogRead(A0);
        y=y/25;
        lcd.SET_XY(3, 0);
        lcd.Write_data(y); //第2行，第3个地址起,打印str2
        delay(100);
        lcd.clear();
        lcd.SET_XY(6, 1);
        lcd.Write_data(jr); //第1行，第3个地址起,打印str2
        lcd.SET_XY(9, 1);
        lcd.Write_data(zl);
    }
    if(y<=zl-2)
    {
        digitalWrite(LEDD, 0);
        y=analogRead(A0);
        y=y/25;
        lcd.SET_XY(3, 0);
        lcd.Write_data(y); //第2行，第3个地址起,打印str2
        delay(100);
        lcd.clear();
        lcd.SET_XY(6, 1);
        lcd.Write_data(jr); //第1行，第3个地址起,打印str2
        lcd.SET_XY(9, 1);
        lcd.Write_data(zl);
    }
    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    if(!b1)
    {
        delay(100);
        if(!b1)
        {
            //加热状态
            if(!b3)
            {
                delay(100);
                if(!b3)
                {
                    jr++;
                }

            }
            else if(!b4)
            {
                delay(100);
                if(!b4)
                {
                    jr--;
                }

            }
        }
    }
    if (!b2)
    {
        //制冷状态
        delay(100);
        if (!b2)
        {
            if(!b3)
            {
                delay(100);
                if(!b3)
                {
                    zl++;
                }
            }
            else if(!b4)
            {
                delay(100);
                if(!b4)
                {
                    zl--;
                }
            }
        }
    }
    y=analogRead(A0);
    y=y/25;
    lcd.SET_XY(3, 0);
    lcd.Write_data(y); //第2行，第3个地址起,打印str2
    delay(100);
    lcd.clear();
    lcd.SET_XY(6, 1);
    lcd.Write_data(jr); //第1行，第3个地址起,打印str2
    lcd.SET_XY(9, 1);
    lcd.Write_data(zl);
}
