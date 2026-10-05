#include<stdio.h>
#include<string.h>

int main()
{
	char str[101];
	scanf_s("%s", str, sizeof(str));
	int len = strlen(str);
	int a = 1;
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			a = 0;
			break;
		}

	}
	if (a == 1)
	{
		printf("是回文");
	}
	else
	{
		printf("不是回文");
	}
	return 0;
}