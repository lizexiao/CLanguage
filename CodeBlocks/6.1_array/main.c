#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define NUMBER_OF_STUDENTS    5

void ShowScores(void)
{
	double scores [NUMBER_OF_STUDENTS];
	int8_t i;

	for (i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		printf("请输入第%d位学生的成绩： ", i + 1);
		scanf("%lf", &scores[i]);
	}

	for (i = 0; i < NUMBER_OF_STUDENTS; i++)
	{
		printf("第%d位学生的成绩是： %.2f\n", i + 1, scores[i]);
	}
}

int main()
{
	ShowScores();

    return 0;
}
