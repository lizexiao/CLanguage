#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 1024, num2 = 2048;
	int * ptr_num1, * ptr_num2;

	ptr_num1 = &num1;
	ptr_num2 = &num2;

	printf("变量num2分配内存的地址是%p(%x).\n\n", ptr_num2, ptr_num2);

	num2 = num1;

	printf("通过指针变量重新赋值后： \n");
	printf("变量num1的值是%d，分配内存的地址是%p.\n", num1, ptr_num1);
	printf("变量num2的值是%d，分配内存的地址是%p.\n\n", num2, ptr_num2);

	* ptr_num2 = * ptr_num1;

	printf("通过指针变量重新赋值后： \n");
	printf("变量num1的值是%d，分配内存的地址是%p.\n", num1, ptr_num1);
	printf("变量num2的值是%d，分配内存的地址是%p.\n\n", num2, ptr_num2);

	printf("size = %d\n", sizeof(ptr_num1));

	char c = 'a';
	char * ptr_c = &c;

	printf("size2 = %d\n", sizeof(c));
	printf("size3 = %d", sizeof(ptr_c));

    return 0;
}
