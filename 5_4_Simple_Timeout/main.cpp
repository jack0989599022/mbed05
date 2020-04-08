#include "mbed.h"

Timeout tout;
DigitalIn button(SW2);
DigitalOut redLED(LED1);

void blink(){
    redLED = 0;
    wait(0.5);
    redLED = 1;
}

/*wait for 2.5s red led will turn on*/ 
int main(){
    for( redLED=1; ; ){
        if(button==0){
            tout.attach( &blink, 2.0); /&sudo screen /dev  /*wait 2s to call blink
        }
        wait(0.2);
    }
}