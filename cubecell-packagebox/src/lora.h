#include "LoRaWan_APP.h"
#include "Arduino.h"
#include <Wire.h>  

static void prepareTxFrame( uint8_t port );
void LoRaSetup();
void LoRaLoop();