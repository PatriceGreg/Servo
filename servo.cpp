#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

int main(){
     wiringPiSetup ();
    int servoPin = 0;
    pinMode(servoPin, OUTPUT);
    
    while(1){
        std::cout<<"Fuck Ahmed\n";
        digitalWrite(servoPin, LOW);
        delay(500);
        digitalWrite(servoPin,HIGH);
        delay(500);
    }
}