#include<stdio.h>

int varify_prime(int val)
{
	for (int i = 2; i < val; i++)
	{
		if (val % i == 0)
			return 1;
	}
	return 0;
}

int main()
{
	unsigned int n;
	printf("Enter the number:");
	scanf("%u", &n);

	switch (n)
	{
		case 0:
			printf("No prime found\n");
			break;
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("1, 2\n");
			break;
		default:
		{
			printf("1, 2, ");
			for (int i = 3; i <= n; i++)
			{
				if (!varify_prime(i))
				{
					printf("%d, ", i);
				}
			}
			printf("\b\b\n");
			break;
		}
	}
	return 0;
}