#include<stdio.h>

void remove_repeating_char(char *data)
{
	int index = 0;
	int next_index;
	int shift_index;

	while (data[index])
	{
		next_index = index + 1;
		while (data[next_index])
		{
			if (data[index] == data[next_index])
			{
				//this part is for left shift the entire string from where the repeat detect
				shift_index = next_index;
				while (data[shift_index])
				{
					data[shift_index] = data[shift_index + 1];
					shift_index++;
				}
			}
			next_index++;
		}
		index++;
	}
}

int main()
{
	char data[100];

	printf("Enter the string:");
	gets(data);

	printf("Before removing the repeating char: %s\n", data);
	remove_repeating_char(data);
	printf("After removing the repeating char: %s\n", data);
	return 0;
}