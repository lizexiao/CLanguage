#include <stdio.h>
#include <stdlib.h>


int EvenSum(int start, int end)
{
	int sum = 0, i = start;

	for(; i <= end; i++)
	{
		if(i % 2 == 0)
		{
			sum += i;
		}
	}

	return sum;
}

int main()
{
	int sum = EvenSum(1, 100);

	printf("Even sum = %d.\n", sum);

    return 0;
}
