int hallsensor=12;
int sensorRead;
#include <IRremote.h>
IRsend irsend;

void setup() {
  Serial.begin(9600);
  pinMode(hallsensor, INPUT);
}

void loop() {
  sensorRead= digitalRead(hallsensor);
  Serial.println(sensorRead);
  //delay(200);
  if (sensorRead ==LOW){

    for (int i=0; i<3; i++){
    irsend.sendSony (0xB4B8F, 20);
    delay(40);
      }
     delay(400);
    }
  while (sensorRead == LOW){
    sensorRead= digitalRead(hallsensor);
  }
}
