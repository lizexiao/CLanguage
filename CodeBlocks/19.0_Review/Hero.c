#include "Hero.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Hero heros[100] = {
    {"影流之主劫", 'M', "刺客", 579, 0.644, "位移", {2024, 8, 13}},
    {"琴瑟仙女娑娜", 'F', "法师", 482, 0.644, "减速、治疗", {2024, 8, 13}},
    {"疾风剑豪", 'M', "战士", 517.76, 0.67, "护盾、位移", {2024, 8, 13}}
};

int length = 3;

void ShowHero()
{
    for(int i = 0; i < sizeof(heros) / sizeof(Hero); i++)
    {
        printf("名称： %s\n职业： %s\n生命值： %f\n攻击速度： %f\n英雄能力： %s\n上线日期%d-%d-%d\n\n", heros[i].heroName, heros[i].heroJob, heros[i].heroLife, heros[i].heroAttackSpeed, heros[i].heroAbillity, heros[i].heroLoginTime.heroLoginTimeYear, heros[i].heroLoginTime.heroLoginTimeMonth, heros[i].heroLoginTime.heroLoginTimeDay);
    }
}

void InputHero()
{
    char answer[1] = "y";

    do
    {
        if(length > 100)
        {
            printf("英雄的个数已满！");
            break;
        }

        printf("当前录入第%d位英雄的信息,\n", length + 1);
        printf("英雄名称： ");

        heros[length].heroName = (char*)malloc(50);

        scanf("%s",&heros[length].heroName);

        fflush(stdin);

        printf("英雄性别： ");

        // heros[length].heroGender = getchar();
        scanf("%c%*c", &heros[length].heroGender);

        fflush(stdin);

        printf("英雄职业： ");

        heros[length].heroJob = (char *)malloc(50);

        scanf("%s", heros[length].heroJob);

        printf("英雄生命值： ");
        scanf("%f", &heros[length].heroLife);

        printf("英雄攻击速度： ");
        scanf("%f", &heros[length].heroAttackSpeed);

        printf("英雄特殊能力: ");

        heros[length].heroAbillity = (char*)malloc(50);

        scanf("%s", heros[length].heroAbillity);

        printf("上线时间, \n");
        printf("年： ");
        scanf("%d", &heros[length].heroLoginTime.heroLoginTimeYear);
        printf("月： ");
        scanf("%d", &heros[length].heroLoginTime.heroLoginTimeMonth);
        printf("日： ");
        scanf("%d", &heros[length].heroLoginTime.heroLoginTimeDay);

        printf("是否继续录入英雄的信息？（Y/y表示继续录入，N/n表示不继续录入）\n");

        fflush(stdin);

        scanf("%s", answer);

        fflush(stdin);

        length ++;

    } while (strcmp(answer, "Y") == 0 || strcmp(answer, "y") == 0);
}

void DisplayHerosAverageAge()
{
    int lifeOfSum = 0;
    double herosAverageAge = 0;

    for(int i = 0; i < length; i++)
    {
        lifeOfSum += (heros + i) -> heroLife;
    }

    herosAverageAge = lifeOfSum * 1.0 / length;

    printf("生命值的平均值为： %.2lf", herosAverageAge);

}
