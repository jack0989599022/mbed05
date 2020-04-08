#include "mbed.h"

Timer timer;
DigitalOut blueLED(LED3);

int main(){
    timer.start();

    while(1){
        if(timer.read() > 0.5){
            blueLED = !blueLED;
            timer.reset();
        }
    }
}