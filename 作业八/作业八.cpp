#include<stdio.h>
int square(int n);
int sum_of_squares(int a, int b);
int main()
{
	int c, d;
	scanf_s("%d %d", &c, &d);
	int e = sum_of_squares(c, d);
	printf("平方和为%d\n", e);
	return 0;

}
int square(int n)
{
	return n * n;
}
int sum_of_squares(int a, int b)
{
	int sa = square(a);
	int sb = square(b);
	return sa + sb;
}