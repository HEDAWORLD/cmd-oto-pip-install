#include <Arduino.h>
#include <Mouse.h>

byte bf[3];

void setup() {
  Mouse.begin();
  Serial.begin(115200);
}

void loop() {
  // 3 byte: X, Y, Buton
  if (Serial.available() >= 3) {
    Serial.readBytes((char*)bf, 3);
    Mouse.move((int8_t)bf[0], (int8_t)bf[1], 0);

    // Her pakette önce tüm tuşları bırak, sonra istenen tuşa bas
    Mouse.release(MOUSE_LEFT | MOUSE_RIGHT | MOUSE_MIDDLE);
    if (bf[2] == 1) Mouse.press(MOUSE_LEFT);
    if (bf[2] == 2) Mouse.press(MOUSE_RIGHT);
    if (bf[2] == 3) Mouse.press(MOUSE_MIDDLE);
  }
}