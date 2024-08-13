#include <stdio.h>
#include <stdlib.h>

void allocate(void)
{
	//malloc的规范格式：
	//type * name;
	//name = (type *)malloc(dataLength);
	//或者：
	//type * name;
	//name = (type *)malloc(sizeof(type) * number);

	int * nums;
	nums = (int *)malloc(sizeof(int) * 5);
	int i;

	for(i = 0; i < 5; i++)
	{
		printf("请输入第%d个元素：", i + 1);
		scanf("%d", nums + i);
	}

	printf("数组元素为：\n");

	for(i = 0; i < 5; i++)
	{
		printf("%d\n", * (nums + i));
	}

	free(nums);

	nums = NULL;
}

void allocate1(void)
{
	//malloc的规范格式：
	//type * name;
	//name = (type *)malloc(dataLength);
	//或者：
	//type * name;
	//name = (type *)malloc(sizeof(type) * number);

	int * nums;
	nums = (int *)malloc(sizeof(int) * 5);
	int i;

	nums[3] = 1234;

	printf("数组元素为：\n");

	for(i = 0; i < 5; i++)
	{
		printf("%d\n", * (nums + i));
	}

	free(nums);

	nums = NULL;
}

void callocate(void)
{
		//malloc的规范格式：
	//type * name;
	//name = (type *)malloc(dataLength);
	//或者：
	//type * name;
	//name = (type *)malloc(sizeof(type) * number);

	int * nums;
	nums = calloc(5, sizeof(int));
	int i;

	nums[3] = 1234;

	printf("数组元素为：\n");

	for(i = 0; i < 5; i++)
	{
		printf("%d\n", * (nums + i));
	}

	free(nums);

	nums = NULL;
}

int main()
{
	allocate();
	allocate1();
	callocate();

    return 0;
}
