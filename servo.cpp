#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

int main(){
     wiringPiSetup ();
    int servoPin = 0;
    softPwmCreate(servoPin,0,1024);
    
    while(1){
        
        for(int x; x<1025; x++){
        std::cout<<x"/n";
        softPwmWrite (servoPin,x) ;
        delay(200);
        }
    }
}