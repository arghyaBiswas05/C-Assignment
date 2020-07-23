#include <stdio.h>

int main()
{
	char string_data1[100], string_data2[100];
	int flag = 1;

	printf("Enter the 1st string:");
	gets(string_data1);
	printf("Enter the 2nd string:");
	gets(string_data2);

	if (strlen(string_data1) == strlen(string_data2))
	{
		int len = strlen(string_data1);
		for(int index = 0; index < len; index++)
		{
			if (string_data1[index] == string_data2[index])
				continue;
			else
			{
				flag = 0;
				break;
			}
		}
	}
	else
		flag = 0;

	if (flag)
		printf("Same\n");
	else
		printf("Not same\n");

	return 0;
}