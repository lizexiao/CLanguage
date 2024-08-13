#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num = rand();

    printf("%d\n", num);

    printf("这里是文字，非常普通！！！\n");

    system("color 01");

    return 0;
}
