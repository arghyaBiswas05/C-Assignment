#include<stdio.h>

int main()
{
	char data[100];
	int index = 0;
	int counter = 0;
	char tmp_char = '\0';
	printf("Enter the data:");
	gets(data);

	while (data[index])
	{
		if (tmp_char == data[index])
			counter++;
		else
		{
			if (counter)
				printf("%d",counter);
			tmp_char = data[index];
			printf("%c",tmp_char);
			counter = 1;
		}
		index++;
	}
	printf("%d\n",counter);
	return 0;
}