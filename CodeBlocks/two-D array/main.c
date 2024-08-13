#include <stdio.h>
#include <stdlib.h>

#define ROW   4
#define COL   3

int main()
{
	int i, j;
    double scores[ROW][COL] = {
		{98, 67, 89},
		{89, 67, 88},
		{99, 77, 55},
		{78, 99, 67}
    };

    printf("语文\t数学\t英语\n");

    for(i = 0; i < ROW; i++)
    {
		for(j = 0; j < COL; j++)
		{
			printf("%-8.2lf", scores[i][j]);
		}
		printf("\n");
    }

    return 0;
}
