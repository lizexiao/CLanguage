#include <stdio.h>
#include <stdlib.h>

double power(double, double);

int main()
{
    double num1 = 2.12, num2 = 5.235;

    printf("%.2lf的%.2lf次方等于：%.2lf", num1, num2, power(num1, num2));

    return 0;
}

double power(double num, double HowManyTimes)
{
    double result = 1;

    for(int i = 1; i <= HowManyTimes; i++)
    {
        result *= num;
    }

    return result;
}
