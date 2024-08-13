#include <stdio.h>
#include <math.h>

int main()
{
	printf("%.2lf\n", ceil(-98.00000000000000001));
	printf("%.2lf\n", floor(-98.99999999999999999));

	printf("%.2lf\n", sqrt(9));

	printf("%.2lf\n", pow(5, 4));

	printf("%d\n", abs(-98));

    return 0;
}
