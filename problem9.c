#include <stdio.h>

void function_two(int val)
{
	printf("value is: %d\n", val);
}

void function_one(void (*function)(int))
{
	for (int i = 0; i < 10; i++)
		(*function)(i);
}

int main(void)
{
	function_one(function_two);
	return (0);
}
