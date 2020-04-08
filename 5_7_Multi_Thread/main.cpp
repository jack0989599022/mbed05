#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
Thread thread1; /*red led*/
Thread thread2; /*green led*/

void led1_thread() {
    while (true) {
        led1 = !led1; /*red led blink 0.5s, then no led repeatedly*/
        wait(0.5);
    }
}

void led2_thread() {
    while (true) {
        led2 = !led2; /*green led blink 0.5s, then no led repeatedly*/
        wait(1);
    }
}

/*   red ->led off ->red ->led off)*/
/* + led off ->green ->green ->led ogg*/
/* = red ->green ->yellow ->no led*/
int main() {
    thread1.start(led1_thread);
    thread2.start(led2_thread);
}
