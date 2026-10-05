#include <stdio.h>
int main()
{
	int a, b;
	int he;
	float pj;
	scanf_s("%d %d", &a, &b);
	he = a + b;
	pj = (a + b) / 2.0;
	printf("和为:%d\n", he);
	printf("平均为:%.2f\n", pj);
	return 0;
}
