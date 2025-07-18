#include "Adafruit_TinyUSB.h"

int btn1 = 1;
int btn2 = 2;
int btn3 = 3;
int btn4 = 4;

int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;

Adafruit_USBD_Gamepad gamepad;

void setup(){
    pinMode(btn1, INPUT_PULLUP);
    pinMode(btn2, INPUT_PULLUP);
    pinMode(btn3, INPUT_PULLUP);
    pinMode(btn4, INPUT_PULLUP);


    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);

    gamepad.begin();

}

void loop(){
    bool pressed1 = !digitalRead(btn1);
    bool pressed2 = !digitalRead(btn2);
    bool pressed3 = !digitalRead(btn3);
    bool pressed4 = !digitalRead(btn4);
    digitalWrite(led1, pressed1 ? HIGH :LOW);
    digitalWrite(led2, pressed2 ? HIGH: LOW);
    digitalWrite(led3, pressed3 ? HIGH: LOW);
    digitalWrite(led4, pressed4 ? HIGH: LOW);

    if (pressed1) gamepad.press(1);
    else gamepad.release(1);

    if (pressed2) gamepad.press(2);
    else gamepad.release(2);

    if (pressed3) gamepad.press(3);
    else gamepad.release(3);

    if (pressed4) gamepad.press(4);
    else gamepad.release(4);

    delay(10);

}