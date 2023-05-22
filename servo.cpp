#include <wiringPi.h>
#include <softPwm.h>

int main(){
     wiringPiSetup ();
    byte servoPin = 0;
    pinMode(servoPin, OUTPUT);
    
    while(1){
        digitalWrite(servoPin, LOW);
        delay(500);
        digitalWrite(servoPin,HIGH);
        delay(500);
    }
}