#include<stdio.h>
int main()
{
	int arr[5];
	int a;
	for (a = 0; a < 5; a++)
	{
		scanf_s("%d", &arr[a]);
	}
	for (a = 4; a >= 0; a--)
	{
		printf_s("%d", arr[a]);
	}
	return 0;
}