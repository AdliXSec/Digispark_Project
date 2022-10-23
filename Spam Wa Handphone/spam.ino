// pertama tama ubah setingan whatsapp ke tekan enter untuk kirim

#include "DigiKeyboard.h"

int jumlah = 100; // jumlah spam
int mulai = 1;

void setup() {
    pinMode(1, OUTPUT);
}

void loop() {
    if(mulai < jumlah) {
        while(mulai < jumlah) {
            DigiKeyboard.delay(300);
            DigiKeyboard.print("AYAAANG"); // message
            DigiKeyboard.delay(300);
            DigiKeyboard.sendKeyStroke(KEY_ENTER);
            digitalWrite(1, HIGH);
            delay(100);
            digitalWrite(1, LOW);
            delay(100);
            mulai=mulai+1;
        }
    }
    digitalWrite(1, HIGH);
}