#include <stdio.h>
#include <stdlib.h>

#define COUNT       9

int main()
{
	int array[COUNT] = {15, 20, 25, 30, 35, 40, 45, 50, 55};
	int temp, i;


	for(i = 0; i < COUNT / 2; i++)
	{
		temp = array[i];
		array[i] = array[COUNT - i - 1];
		array[COUNT - i - 1] = temp;
	}
	printf("\n————————————————————————————————————————————————————————————————————————————————\n");

	for(i = 0; i < COUNT; i++)
	{
		printf("%d\t", *(array + i));
	}

	printf("\n————————————————————————————————————————————————————————————————————————————————\n");


















































	/*
	int i, * ptr_array = array;

	for(i = 0; i < COUNT; i++)
	{
		printf("第%d个元素的值为%d\t地址为： %p\n", i + 1, ptr_array[i], &ptr_array[i]);
	}
	*/

    return 0;
}
