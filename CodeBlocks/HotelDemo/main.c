#include <stdio.h>
#include <stdlib.h>

extern char hotelNames[4][50]

int main()
{
    int choice;

    choice = menu();

    if(choice > 0 && choice < 5)
    {
        printf("当前用户选择的是%s\n", hotelNames[choice - 1]);
    }

    return 0;
}
