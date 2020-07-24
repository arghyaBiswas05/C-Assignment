#include<stdio.h>

unsigned int odd_zero_even_one = 2863311530; //1010_1010....
unsigned int odd_one_even_zero = 1431655765; //0101_0101....

int main()
{
	unsigned int num;
	unsigned int even_bits;
	unsigned int odd_bits;
	unsigned int result;

	printf("Enter the value:");
	scanf("%u",&num);

	even_bits = num & odd_zero_even_one;
	odd_bits = num & odd_one_even_zero;

	even_bits = even_bits >> 1;
	odd_bits = odd_bits << 1;

	result = even_bits | odd_bits;

	printf("Before swapting: %u\nAfter swaping: %u\n", num, result);
	return 0;
}