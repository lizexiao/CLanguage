#include <stdio.h>
#include <stdlib.h>

#define     ARRAY_COUNT      5

void input(double[]);

void sort(double[]);

void show(double[]);

int main()
{
    double scores[ARRAY_COUNT];

    input(scores);

    printf("排序前：\n");

    show(scores);

    sort(scores);

    printf("排序后：\n");

    show(scores);

    return 0;
}

void input(double scores[])
{
    int i = 0;

    for(;  i < ARRAY_COUNT; i++)
    {
        printf("请输入第%d門课的成绩： ", i + 1);
        scanf("%lf", &scores[i]);
    }
}

void sort(double scores[])
{
    int i, j;
    double temp;

    for(i = 0; i < ARRAY_COUNT - 1; i++)
    {
        for(j = 0; j < ARRAY_COUNT - i - 1; j++)
        {
            if(scores[j] > scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

void show(double scores[])
{
    int i;

    printf("————————————————————————————————————————————————————————————————————————\n语文\t数学\t英语\t物理\t化学\n");

    for(i = 0; i < ARRAY_COUNT; i++)
    {
        printf("%.1lf\t", *(scores + i));
    }

    printf("\n————————————————————————————————————————————————————————————————————————\n");
}
