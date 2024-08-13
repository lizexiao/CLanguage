#include <stdio.h>
#include <stdlib.h>

#define Pi      3.1415926

double GetCircleArea(double);
double GetRectangleArea(double, double);
double GetTriangleArea(double, double);
double power(double, double);

double power(double num, double HowManyTimes)
{
    double result = 1;

    for(int i = 1; i <= HowManyTimes; i++)
    {
        result *= num;
    }

    return result;
}

double GetCircleArea(double radius)
{
    double area = Pi * power(radius,  2);

    if(radius < 0)
    {
        return;
    }

    return area;
}

double GetRectangleArea(double width, double height)
{
    double area = width * height;

    return area;
}

double GetTriangleArea(double width, double height)
{
    double area = width * height / 2;

    return area;
}

int main()
{
    double radius;

    printf("请输入圆的半经：");

    scanf("%lf", &radius);

    double area = GetCircleArea(radius);

    printf("此圆的面积为：%.2lf\n\n", area);

    double width, height;

    printf("请输入矩形的长和宽：");

    scanf("%lf%lf", &width, &height);

    area = GetRectangleArea(width, height);

    printf("此矩形的面积为：%.2lf\n", area);

    printf("请输入三角形的底和高：");

    scanf("%lf%lf", &height, &width);

    area = GetTriangleArea(height, width);

    printf("此三角形的面积为：%.2lf\n", area);

    return 0;
}
