#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USER_NAME   "admin"
#define PASSWORD    "admin"

//int login(char userName[], int password)
//{
//    int result = 0;
//
//    if(strcmp(USER_NAME, userName) == 0 && strcmp(PASSWORD, password) == 0)
//    {
//        result = 1;
//    }
//
//    return result;
//}

int main()
{
    char s1[100] = "你好，中国！", s2 = "你也好，美国！";

    strcat(s1, s2);
    printf("s1:%s\ts2:%s", s1, s2);
//    char userName[50];
//    char password[50];
//
//    printf("请输入用户名及密码（以空格隔开）： ");
//    scanf("%s%s", userName, password);


//    char word1[] = "Hello world!";
//    char word2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
//    char word3[] = "你好，世界！";
//
//    printf("word1的长度为：%d\nword2的长度为：%d\nword3的长度为：%d\n", strlen(word1), strlen(word2), strlen(word3));


    return 0;
}
