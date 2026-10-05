#include <stdio.h>
#include <string.h>
int main()
{
	char name[20];
	int age = 18;
	float height = 175.5f;
	printf("输入名字");
	scanf_s("%s", name,20);
	if (strcmp(name, "小明") == 0)
	{
		printf("姓名：%s\n",name);
		printf("年龄：%d岁\n",age);
		printf("身高：%.1f\n", height);
	}
	else
	{
		printf("不知道\n");

	}
	return 0;
}

