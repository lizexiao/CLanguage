#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int i = 10;
//    int j = 20;
//
//    int * ptr_i = &i;
//    int * ptr_j = &j;
//
//    printf("%#x\t%#x\t%d\n", ptr_i, ptr_j, sizeof(ptr_i));
    char string1[] = "For The Horde";
    const char * string2 = "For The Horde";

    printf("字符串常量的地址是： %#x\n", "For The Horde");
    printf("字符数组的首地址是： %#x\n", string1);
    printf("字符指针的取值是：%#x\n", string2);

    return 0;
}
