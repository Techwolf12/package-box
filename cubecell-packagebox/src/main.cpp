#include "LoRaWan_APP.h"
#include "Arduino.h"
#include "lora.h"
#include "display.h"

void setup() {
    boardInitMcu();
	Serial.begin(115200);
    LoRaSetup();
    DisplaySetup();
}

void loop() {
    LoRaLoop();
    DisplayLoop();
}