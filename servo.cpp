#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

using namespace std;

int main(){
    int x;
     wiringPiSetup ();
    int servoPin = 0;
    softPwmCreate(servoPin,0,30);
    
    while(1){
        
        for(x; x<31; x++){
            cout<<x<<endl;
            softPwmWrite (servoPin,x) ;
            delay(200);
        }

        for(x; x>0; x--){
            cout<<x<<endl;
            softPwmWrite (servoPin,x) ;
            delay(200);
        }
    }
}