#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 9, * ptr_num = &num, * ptr_num2 = &ptr_num;

	printf("num变量的地址是： %p\t%x\n", ptr_num, &num);

	/*
	*ptr_num = 99999;
	printf("ptr_num对应的值为： %d\n", *ptr_num);
*/
	printf("\nptr_num对应的地址为： %d\n", ptr_num2);

	printf("\n原空间num对应的值为： %d\n", *ptr_num2);


    return 0;
}
