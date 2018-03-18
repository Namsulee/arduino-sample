#include <drv2605.h>
DRV2605 haptic;
#define LED_BUILTIN 2
void setup() {
  // LED_BUILTIN 은 보드에 내장되어 있는 LED 의 핀번호이며, NodeMCU 경우는 GPIO 16 으로 설정되어 있습니다.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  /* Software I2C = false, Verbose = true */
  if (haptic.init(false, true) != 0) Serial.println("init failed!");
  if (haptic.drv2605_AutoCal() != 0) Serial.println("auto calibration failed!");
  delay(2000);/* Software I2C = false, Verbose = true */  
  Serial.println("Smart Holder demo");
}

void loop()
{
    unsigned char i;
    for(i=1;i<124;i++)
    {
        Serial.print("Effect No: ");
        Serial.println(i);
        
        haptic.drv2605_Play_Waveform(i);
        delay(2000);
    }
}
