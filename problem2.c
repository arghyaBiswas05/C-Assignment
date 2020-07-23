#include <stdio.h>

void print_byte(unsigned char data)
{
	int index = 7;
	while (index > -1)
	{
		int tmp = 0;
		int val = 1 << index;
		if ((data & val) == val)
			tmp = 1;
		printf("%d", tmp);
		index--;
	}
	printf("\n");
}

int main()
{
	unsigned char ch = 179; // Eqv: 10110011

	printf("Before operation:");
	print_byte(ch);

	ch = ch ^ 18;
	ch = ch ^ 72;
	ch = ch ^ 36;

	printf("After operation:");
	print_byte(ch);

	return 0;
}