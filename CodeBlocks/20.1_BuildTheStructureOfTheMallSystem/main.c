#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _prop
{
    int id;
    char propName[50];
    int propPrice;
    int propStock;
    char propDesc[50];
} Prop;

typedef struct _bag
{
    int playerId;
    int propCount;
    int max;
    Prop props[40];
} Bag;



typedef struct _player
{
    int id;
    char name[50];
    char password[6];
    double gold;

    Bag bag;
} Player;

Prop * props;
Player * players;

int propsCount = 0, playersCount = 0;

void Init()
{
    static Prop propArray[] = {
        {1, "双倍经验卡", 3000, 10, "双击666"},
        {2, "腐烂的道袍", 5000, 8, "只可远观不可亵玩"},
        {3, "生锈的铁剑", 8000, 10, "新手专用"},
        {4, "无极袍",    13000, 5, "刀枪不入，水火不侵"},
        {5, "直升1级丹", 83000, 10, "吃了以后保准还想再吃再吃再吃······"}
    };

    static Player playerArray[] = {
        {1, "超级毛毛虫", "1J2E5G", .gold = 200000, .bag.max = 8},
        {2, "塔罗奥特曼", "4T5E6A", .gold = 100000, .bag.max = 8},
        {3, "元始天尊之徒", "6S7D8E", .gold = 300000, .bag.max = 8},
        {4, "星河", "1L3L5T", .gold = 90000, .bag.max = 8}
    };

    props = propArray;
    players = playerArray;

    propsCount = 5;
    playersCount = 4;
}

void ShowProps()
{
    int i = 0;

    printf("%-5s\t%-14s\t%-7s\t库存\t商品介绍\n", "编号", "名称", "单价");

    for(; i < propsCount; i++)
    {
        printf("%-5d\t%-14s\t%-7d\t%d\t%s\n", props[i].id, props[i].propName, props[i].propPrice, props[i].propStock, props[i].propDesc);
    }

    printf("\n");

}//164 * 53

void ShowPlayers()
{
    printf("编号\t%-14s\t钱币\n\n", "名称");

    for(int i = 0; i < playersCount; i++)
    {
        printf("%d\t%-14s\t%.0lf\n", players[i].id, players[i].name, players[i].gold);

        printf("\t%s\t%d\t", props[0].propName, players[0].bag.props[0].propStock);
        printf("\t%s\t%d\t", props[1].propName, players[1].bag.props[1].propStock);
        printf("\t%s\t%d\t", props[2].propName, players[2].bag.props[2].propStock);
        printf("\t%s\t%d\t", props[3].propName, players[3].bag.props[3].propStock);
        printf("\t%s\t%d\t", props[4].propName, players[4].bag.props[4].propStock);

        printf("\n\n");

    }

    printf("\n");
}

void Trade(Player * player, int propId)
{
    Prop * tradeProp = NULL;
    int i;

    for(i = 0; i < propsCount; i++)
    {
        if(propId == props[i].id)
        {
            tradeProp = props + i;
            break;
        }
    }

    if(tradeProp  ->  propStock == 0)
    {
        printf("对不起，商店都被买空了！\n");
    }

    else if(player -> gold < tradeProp -> propPrice)
    {
        printf("对不起，钱不够了，还差%.1lf元", tradeProp -> propPrice - player -> gold);
    }
    else if(player -> bag.propCount == player -> bag.max && player -> bag.propCount)
    {
        printf("对不起，背包已满，还需要%d个插槽\n", player -> bag.propCount - player -> bag.max);
    }
    else
    {
        printf("\n\n********************交易前********************\n");
        ShowPlayers();
        ShowProps();

        tradeProp -> propStock --;

        player -> gold -= tradeProp->propPrice;

        for(i = 0; i < player->bag.propCount; i++)
        {
            if(propId == player->bag.props[i].id)
            {
                player->bag.props[i].propStock++;
                break;
            }
        }

        if(i == player->bag.propCount)
        {
            player->bag.props[player->bag.propCount].id = tradeProp->id;
            player->bag.props[player->bag.propCount].propPrice = tradeProp->propPrice;
            player->bag.props[player->bag.propCount].propStock = 1;
            strcpy(player->bag.props[player->bag.propCount].propName, tradeProp->propName);
            strcpy(player->bag.props[player->bag.propCount].propDesc, tradeProp->propDesc);
            player->bag.propCount++;
        }

        printf("\n\n********************交易后********************\n");
        ShowPlayers();
        ShowProps();
    }
}

int main()
{
    Init();

    Trade(&players[2], 4);

    return 0;
}
