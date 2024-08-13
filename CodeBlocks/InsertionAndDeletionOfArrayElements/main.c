#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 5, deleteIndex = -1, i;
	double powers[] = {42322, 45771, 40907, 41234, 40767}, deletePouwer, insertpower;

	printf("请输入要删除的战力值： ");
	scanf("%lf", &deletePouwer);

	for(i = 0; i < count; i++)
	{
		if(deletePouwer == powers[i])
		{
			deleteIndex = i;

			break;
		}
	}

	if(deleteIndex < 0)
	{
		printf("无此战力值！");
	}
	else
	{
		for(i = deleteIndex; i < count - 1; i++)
		{
			powers[i] = powers[i + 1];
			count --;

			break;
		}
	}

	printf("删除后的结果： \n");

	for(i = 0; i < count; i++)
	{
		printf("%.2lf\t", powers[i]);
	}

	printf("请输入新战力值： ");
	scanf("%lf", &insertpower);
	powers[count] = insertpower;
	count++;
	printf("插入后的结果： \n");

	for(i = 0; i < count; i++)
	{
		printf("%.2lf\t", powers[i]);
	}

    return 0;
}
