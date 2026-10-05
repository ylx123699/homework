#include <stdio.h>
int main() {
	int a, b, c;
	int max;
	printf("请输入三个整数：");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a > c)
	{
		max = a;
	}
	else if (b > a && b > c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	printf("最大值为：%d\n", max);
	return 0;
}
