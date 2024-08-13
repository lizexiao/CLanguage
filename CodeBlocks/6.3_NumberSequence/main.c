#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void PrintNumberSequence(int numberSequence[], uint8_t length)
{
	uint8_t i;

	for (i = 0; i < length; i++)
	{
		printf("数组位于%d处是%d。\n", i, numberSequence[i]);
	}
}

void PrintSumAverage(int numberSequence[], uint8_t length)
{
	int sum = 0, j;
	float average = 0.0f;

	for (j = 0; j < length; j++)
	{
		sum += numberSequence[j];
	}
	average = (float) sum / length;

	printf("Sum = %d, average = %.2f\n", sum, average);
}

void GuessNumber(int numberSequence[], uint8_t length)
{
	int number, i;


	printf("请输入一个数字： ");
	scanf("%d", &number);

	for (i = 0; i < length; i++)
	{
		if(number == numberSequence[i])
		{


			break;
		}
	}

	if (i == length)
	{
		printf("没找到了数字！\n");
	}
	else
	{
		printf("找到了数字%d！\n", number);
	}
}

int main()
{
	int numbers[] = {8, 4, 2, 1, 23, 344, 12};

	PrintNumberSequence(numbers, 7);
	PrintSumAverage(numbers, 7);
	GuessNumber(numbers, 7);

    return 0;
}
