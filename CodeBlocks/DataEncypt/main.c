#include <stdio.h>
#include <stdlib.h>

#define KEY 4

char * Encrypt(char password[])
{
    int count = strlen(password);

    for(int i = 0; i < count; i++)
    {
        password[i] = ~(password[i] + i + KEY & 33);
    }

}

char * Decrypt1(char password[])
{
    int count = strlen(password);

    for(int i = 0; i < count; i++)
    {
        password[i] = ~(password[i] - i - KEY);
    }
}

char * Decrypt2(char password[])
{
    int count = strlen(password);

    for(int i = 0; i < count; i++)
    {
        password[i] = ~(password[i] - i - KEY | 102);
    }
}

char * Dencrypt3(char password[])
{
    int count = strlen(password);

    for(int i = 0; i < count; i++)
    {
        password[i] = password[i] - i - KEY;
    }
}

int main()
{
    char password[] = "tgh";

    Encrypt(password);

    printf("密码加密后的结果：%s\n", password);

    return 0;
}
