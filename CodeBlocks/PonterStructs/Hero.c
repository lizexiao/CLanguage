#include "Hero.h"


Hero heroes[5];
Job jobs[] = {
    {1, "法师", "biubiubiu专家"},
    {2, "刺客", "千年杀专家"},
    {3, "战士", "我的肉特别厚"},
    {4, "机甲师", "靠机甲吃饭"},
    {5, "射手", "指哪打哪"},
};

void InputHero()
{
    int i = 0, j = 0, jobChoice;
    for(;i < 5; i++)
    {
        printf("请输入第%d为英雄的信息： \n", i + 1);

        heroes[i].id = i + 1;

        printf("名称： ");

        heroes[i].name = (char *)malloc(50);

        scanf("%s", heroes[i].name);

        printf("性别：");

        scanf("%c", &heroes[i].gender);
        fflush(stdin);

        for(; j < 5; j++)
        {
            printf("%s\n", jobs[i].name);
        }

        printf("请选择职业：（1-5之间的整数）");
        scanf("%d", &jobChoice);

        heroes[i].job = jobs[jobChoice - 1];

        printf("%s当前的职业：《%s》\n", heroes[i].name, heroes[i].job.name);
    }
}

void ShowHero()
{

}
