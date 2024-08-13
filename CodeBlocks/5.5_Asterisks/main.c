#include <stdio.h>
#include <stdlib.h>

void WriteAsterisks(int rows, int columns)
{
	int i = 0, j;

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j <= 2 - i; j++)
		{
			printf("%c", ' ');
		}

		for(j = 0; j <= 2 * i; j ++)
		{
			printf("%c", '*');
		}

		printf("\n");

	}
}


int main()
{
	WriteAsterisks(4, 10);

   return 0;
}
