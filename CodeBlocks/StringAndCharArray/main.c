#include <stdio.h>
#include <stdlib.h>

GetString(char string[], int count)
{
    fgets(string, count, stdin);

    char * find = strchr(string, '\n');

    if(find)
        *find = '\0';
}

int GetStringLength(char string[])
{
    int count = 0;

    while(string[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char names1[50] = "jack";

    fgets(names1, 51, stdin);

    int len = GetStringLength(names1);

    printf("%d\n", len);

    return 0;
}
