#include<stdio.h>
int main()
{
	int a;
	int he = 0;
	int b;
	scanf_s("%d", &a);
	if (a < 1 || a>1000)
	{
		printf("输入无效");
	}
	else
	{
		for (b = 1; b <= a; b++)
			he += b;
	}
	printf("和为%d", he);
	return  0;
}
