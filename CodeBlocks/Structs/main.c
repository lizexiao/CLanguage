#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct PlayerDetailedContent
//{
//    int level;
//    int hp;
//    int mp;
//    char skill[20];
//    char equipment[30];
//};

struct Sect
{
    int id;
    int count;
    char name[20];
    int type;
};

struct PlayerContent
{
    int id;
    char name[20];
    char password[20];
    char gender;
    struct Sect sect;
    //struct PlayerDetailedContent playerDetailedContent;
};

int main()
{
    struct PlayerContent player1Content1 = {1, "和尚洗头用飘柔", 1347585, 'f', {1, "洛克萨斯", 500, 3}};
    struct PlayerContent player1Content2 = {2, "Dm_2", 13475852, 'm', {2, "diguapai", 500, 3}};
    struct PlayerContent ptr_player1Content2 = &player1Content2;


    printf("%d\t%s\t%s\t%c\t%s", player1Content.id, player1Content.name, player1Content.password, player1Content.gender, player1Content.sect.id, player1Content.sect.name, player1Content.sect.count, player1Content.sect.type);
    printf("%d\t%s\t%s\t%c\t%s", player1Content.id, player1Content.name, player1Content.password, player1Content.gender, player1Content.sect.id, player1Content.sect.name, player1Content.sect.count, player1Content.sect.type);
//    struct Hero hero1 = {}
//
//    hero1.id = 135;
//    strcpy(hero1.name, "德玛西亚之力");
//    hero1.level = 5;
//    hero1.hp = 500;
//    hero.mp = 100;
//    strcpy(hero1.skill, "大宝剑");
//
//    printf("%d\t%s\t%d\t%d\t%s\n")

    return 0;
}
