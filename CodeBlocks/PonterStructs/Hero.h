#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct _job
{
    int id;
    char * name;
    char * describe；
} Job;

typedef struct _heroicAbility
{
    int id;
    char * name;
    char * explain;
} HeroicAbility;

typedef struct _loginTime
{
    int year;
    int month;
    int day;
} LoginTime;

typedef struct _hero
{
    int id;
    char * name;
    Job job;
    double hp;
    double speed;
    HeroicAbility heroicAbility;
    LoginTime loginTime;
}Hero;

void InputHero();

void ShowHero();

#endif // HERO_H_INCLUDED
