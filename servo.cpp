#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

int main(){
     wiringPiSetup ();
    int servoPin = 0;
    softPwmCreate(servoPin,0,1024);
    
    while(1){
        std::cout<<"Fuck Ahmed\n";
        for(int x; x<1025; x++)
        softPwmWrite (servoPin,x) ;
        delay(200);
    }
}