#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void ReciveAge(void);

int main()
{
	ReciveAge();

    return 0;
}

void ReciveAge(void)
{
	int age, errorOccurences = 0;
	int i;

	for(i = 0; i < 5; i ++)
	{
		printf("Please enter your age: ");
		scanf("%d", &age);
		printf("%d, Age you entered: %d.\n", i, age);

		if (age >= 0)
		{
			continue;
		}
		else
		{
			errorOccurences++;
		}
	}

	printf("Errors occurred %d times.\n", errorOccurences);
}
