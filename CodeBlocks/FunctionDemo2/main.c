#include <stdio.h>
#include <stdlib.h>

char * password();

int search(void)
{
    int nums[] = {13, 21, 65, 34, 56};
    int searchNum, searchIndex = -1;
    int i;

    printf("请输入要查找的整型数字： ");
    scanf("%d", &searchNum);

    for(i = 0; i < 5; i++)
    {
        if(searchNum == *(nums + i))
        {
            searchIndex = i;

            break;
        }
    }

    return searchNum;
}

//double[] sort()
//{
//
//}

int main()
{
    int index = search();

    printf("找到的元素下标是： %d\n", index);

    return 0;
}
