#include <Servo.h>

// int LED = 2; // LED 출력 2번핀
int sensor = 7; // 센서 입력값 7번핀
int value = 0; // loop에서 사용할 value 변수 설정
int servoPin = 9; // 모터와 연결할 9번핀
Servo myLightControl; // 사용할 모터 이름
int angle = 0; // 모터 각도 조절


void setup() {
  // put your setup code here, to run once:
  // pinMode (LED, OUTPUT); // 핀모드 LED 출력으로 설정
  pinMode (sensor, INPUT); //  핀모드 센서 입력값으로 설정
  myLightControl.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(sensor); // 변수 value에 디지털 센서값 저장

    if(value == HIGH) {
      // digitalWrite(LED, HIGH);
      for(angle = 0; angle<180; angle++) {
        myLightControl.write(angle);
        delay(1000);
      }
    } else {
      // digitalWrite(LED, LOW);
    }
}
