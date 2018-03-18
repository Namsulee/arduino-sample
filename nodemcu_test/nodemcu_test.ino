#include "Hx711.h"
#define LED_BUILTIN 2
void setup() {
  // LED_BUILTIN 은 보드에 내장되어 있는 LED 의 핀번호이며, NodeMCU 경우는 GPIO 16 으로 설정되어 있습니다.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Smart Holder demo");
}

// loop 함수는 보드가 작동되면 계속 반복해서 실행됩니다.
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // LED 를 켭니다. (HIGH 는 전압을 의미합니다.)
  Serial.println("On");
  delay(1000);                       // 1초동안 대기합니다.
  digitalWrite(LED_BUILTIN, LOW);    // 전압을 LOW 로 설정하여 LED 를 끕니다.
  Serial.println("Off");
  delay(1000);                   // 1초동안 대기합니다.
}
