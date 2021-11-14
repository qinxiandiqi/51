#include <8051.h>

#include <stdint.h>
#include <stdio.h>
#include "delay.h"

// P1 is Chip Pin #P1.0 for STC15W408AS Development board LED Pin
#define ledPin P0

// P33 is Chip Pin #P3.3 for STC15W204S Development board LED Pin
//#define ledPin P33

void main()
{
    // ledPin = 0x00;
    while (1)
    {
        ledPin = 0x00;  // LED on
        delay_ms(5000);
        ledPin = 0xff;  // LED off
        delay_ms(5000);

        // int n;
        // ledPin = 0;  // LED on
        // for (n = 0; n < 10000; n++); // waste some cycles
        // ledPin = 1;  // LED off
        // for (n = 0; n < 10000; n++); // waste some cycles
    }
}