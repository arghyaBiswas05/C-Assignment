#include<stdio.h>
#define MAX_LENGTH 32

void decimal_to_binary_print(long int data)
{
	int index = MAX_LENGTH - 1;
	int ignore_flag = 1;
	while (index > -1)
	{
		int tmp = 0;
		long int val = 1 << index;
		if ((data & val) == val)
		{
			tmp = 1;
			ignore_flag = 0;
		}
		if(ignore_flag != 1)
			printf("%d", tmp);
		index--;
	}
	printf("\n");
}

long int binary_to_decimal(char *data)
{
	long int decimal = 0;
	int len = strlen(data);

	for (int i = 0; i < len; i++)
	{
		decimal = decimal << 1;
		if (data[i] == '1')
			decimal++;
	}
	return decimal;
}

int validate(char *data)
{
	int index = 0;
	while (data[index])
	{
		if (data[index] != '1' && data[index] != '0')
			return 1;
		index++;
	}
	return 0;
}

int main()
{
	char first_pattern[MAX_LENGTH], second_pattern[MAX_LENGTH];
	
	printf("Enter the 1st bit pattern: ");
	gets(first_pattern);
	printf("Enter the 2nd bit pattern: ");
	gets(second_pattern);

	if (!validate(first_pattern) && !validate(second_pattern))
	{
		long int sum = binary_to_decimal(first_pattern) + binary_to_decimal(second_pattern);
		printf("Summation is: ");
		decimal_to_binary_print(sum);
	}
	else
		printf("invalid input\n");
	return 0;
}
