#include "mbed.h"

Ticker time_up;
DigitalOut redLED(LED1);

/*blink every 0.2s*/
void blink(){
    redLED = !redLED;
}

int main(){
    time_up.attach( &blink, 0.2 );
    while(1);
}