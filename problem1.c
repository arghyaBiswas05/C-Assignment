#include <stdio.h>

int main()
{
	int a, b;
	int temp;
	int count = 0;

	printf("First number:");
	scanf("%d", &a);
	printf("Second number:");
	scanf("%d", &b);

	temp = a ^ b;

	while (temp)
	{
		if (temp & 1)
			count++;
		temp = temp >> 1;
	}

	printf("Need to flip %d bits\n",count);
}