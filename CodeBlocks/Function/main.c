#include <stdio.h>
//#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("%d\n", isupper('a'));
	printf("%d\n", islower('a'));
	printf("%d\n", isalpha('-'));
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit(97));
	printf("%d\n", isdigit('9'));
	printf("%c\n", toupper('a'));

	//int i = 0;

	//for(; i < 127; i++)
	//{
		//printf("%c,", i);
	//}

    return 0;
}
