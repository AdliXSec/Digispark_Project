#include "DigiKeyboard.h"//Include the library "DigiKeyboard.h"
int i = 1;
void setup() { //runs once on startup.
}

void loop() {  
    delay(100);//Pause for 500 milliseconds
    while(i<200){
        DigiKeyboard.delay(600);//Pause for 600 milliseconds
        cmd_ping();
        DigiKeyboard.delay(600);
        cmd_tree();
        DigiKeyboard.delay(600);
        notepad();
        i = i++;//stops the program from running multiple times.
    }  
}

void cmd_ping() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("cmd");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("ping 8.8.8.8 -t");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void cmd_tree() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("cmd");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("tree");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void notepad() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("notepad");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.print("You Are HACKED!!!");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}