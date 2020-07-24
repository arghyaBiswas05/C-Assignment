#include<stdio.h>

int main()
{
	struct test
	{
		int status1 : 1;
		int status2 : 1;
		int size : 4;
		char data[4];
	};

	struct test t;

	printf("Size of struc:%d\n",sizeof(t));
	return 0;
}