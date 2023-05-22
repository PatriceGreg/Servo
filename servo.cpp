#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

int main(){
     wiringPiSetup ();
    int servoPin = 0;
    softPwmCreate(servoPin,0,255)
    
    while(1){
        std::cout<<"Fuck Ahmed\n";
        softPwmWrite (servoPin,50) ;
        delay(500);
        softPwmWrite (servoPin,5) ;
        delay(500);
    }
}