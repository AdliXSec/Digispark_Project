#include "DigiKeyboard.h"

#define KEY_TAB 0x2B

//char nama = 'nadin'; // target name
int i = 1;

void setup() {
    // put your setup code here, to run once:
    pinMode(1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(i < 200) {
        delay(300);
        DigiKeyboard.delay(600);
        DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
        DigiKeyboard.delay(200);
        DigiKeyboard.print("https://web.whatsapp.com/");
        DigiKeyboard.delay(200);
        DigiKeyboard.sendKeyStroke(KEY_ENTER);
        delay(10000);
        DigiKeyboard.sendKeyStroke(KEY_TAB);
        DigiKeyboard.delay(200);
        DigiKeyboard.sendKeyStroke(KEY_TAB);
        DigiKeyboard.delay(200);
        DigiKeyboard.sendKeyStroke(KEY_TAB);
        DigiKeyboard.delay(200);
        DigiKeyboard.sendKeyStroke(KEY_TAB);
        DigiKeyboard.delay(200);
        DigiKeyboard.print("nadin"); // Target Name
        DigiKeyboard.delay(600);
        DigiKeyboard.sendKeyStroke(KEY_ENTER);
        delay(1000);
        while(i < 200){
            DigiKeyboard.delay(600);
            DigiKeyboard.print("Hay Sayaaaang"); //message
            DigiKeyboard.delay(100);
            DigiKeyboard.sendKeyStroke(KEY_ENTER);
            digitalWrite(1, HIGH);
            delay(100);
            digitalWrite(1, LOW);
            delay(100);
            i = i + 1;
        }
        digitalWrite(1, HIGH);  
    }
}