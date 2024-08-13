#include "Arduino.h"

void setup(void)
{
    printf("Function setup() is called.\n\n");
}

void loop()
{

    char i = 0;

    while(i < 10)
    {
        printf("Function loop() is called.\n");

        i ++;
    }
}
