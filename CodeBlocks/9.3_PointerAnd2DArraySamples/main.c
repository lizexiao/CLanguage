#include <stdio.h>
#include <stdlib.h>

#define ROW            6
#define COL            3

int main()
{
	int num[ROW][COL] = {
		{11, 22, 33},
		{44, 55, 66},
		{77, 88, 99},
		{111, 222, 333},
		{444, 555, 666},
		{777, 888, 999}
	};
	int i, j;

	for(i = 0; i < ROW; i++)
	{

		for(j = 0; j < COL; j++)
		{
			printf("%d\t", num[i][j]);
		}

		printf("\n");

	}

    return 0;
}
