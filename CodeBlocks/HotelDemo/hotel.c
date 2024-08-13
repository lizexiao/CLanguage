#include <stdio.h>
#include "hotel.h"

char hotelNames[4][50] = {
    "贝罗酒店", "香榭丽舍酒店", "阿斯图里亚斯特拉奥佩拉酒店", "斯科里布索菲特酒店"

};

int menu(void)
{
    int choice;

    printf("请选择入住的酒店： \n");

    for(int i = 0; i < 4; i++)
    {
        printf("%d、%s\n", i + 1, hotelNames[i]);
    }

    printf("5、退出程序\n")

    printf("请输入您的选择： ");
    scanf("%d", &choice);


    return choice;
}
