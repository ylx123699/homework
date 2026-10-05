#include<stdio.h>
int is_prime(int n);

int main()
{
	int a;
	scanf_s("%d", &a);
	int b = is_prime(a);
	if (b == 1)
	{
		printf("%d是质数", a);
	}
	else {
		printf("%d不是质数", a);
		return 0;
	}
}
	
	
	int is_prime(int n)
	{
		if (n <= 1) 
		{
			return 0;
		}
		int i;
		for (i = 2; i <= n - 1; i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}


