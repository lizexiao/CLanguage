#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

typedef struct _loginTime
{
    int heroLoginTimeYear;
    int heroLoginTimeMonth;
    int heroLoginTimeDay;

} LoginTime;

typedef struct _hero
{
    char *heroName;
    char heroGender;
    char *heroJob;
    float heroLife;
    float heroAttackSpeed;
    char *heroAbillity;

    LoginTime heroLoginTime;

} Hero;



void ShowHero();

void InputHero();

void DisplayHerosAverageAge();

#endif // HERO_H_FILE_INCLUDED
