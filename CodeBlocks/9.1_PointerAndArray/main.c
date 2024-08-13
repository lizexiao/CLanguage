#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    double scores[] = {98, 87, 65, 43, 76};
    double *ptr_scores = scores;

    printf("数组的地址是[%p]，数组的一个元素的地址是[%p]。", scores, &scores[0]);

    for(int8_t i = 0; i < 5; i++)
    {
		printf("scores[%d]: Value at %d = %.2lf\n", i, i, scores[i]);
		printf("*(ptr_scores + %d): Value at %d = %.2lf\n\n", i, i, *(ptr_scores + i));
    }

    printf("\n");

    for(int8_t i = 0; i < 5; i++)
    {
		printf("Value at %d = %.2lf\n", i, i, *ptr_scores++);
    }

    printf("\n");

    ptr_scores = scores;

    for(int8_t i = 0; i < 5; i++)
    {
		printf("Value at %d = %.2lf\n", i, i, *ptr_scores++);
    }

	ptr_scores = scores;

	double * ptr_score2 = &scores[3];

	printf("ptr_score2 = %p\n", ptr_score2);
	printf("score at address %p = %.2lf\n", ptr_score2, *ptr_score2);

	printf("ptr_score2 = %p\n", ptr_score2 + 1);
	printf("score at address %p = %.2lf\n", ptr_score2 + 1, *(ptr_score2 + 1));


	printf("ptr_score2 = %p\n", ptr_score2 - 2);
	printf("score at address %p = %.2lf\n", ptr_score2 - 2, *(ptr_score2 - 2));

    return 0;
}
