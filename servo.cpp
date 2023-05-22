#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

using namespace std;

int main(){
     wiringPiSetup ();
    int servoPin = 0;
    softPwmCreate(servoPin,0,30);
    
    while(1){
        
        for(int x; x<31; x++){
            cout<<x<<endl;
            softPwmWrite (servoPin,x) ;
            delay(200);
        }
        for(int y; y>0; y--){
            cout<<y<<endl;
            softPwmWrite (servoPin,y) ;
            delay(200);
        }
    }
}