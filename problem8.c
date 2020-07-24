#include<stdio.h>

int main()
{
	char *void_ptr;

	void_ptr = malloc(3*1024);

	printf("Allocated memory: %d Byte\n", _msize(void_ptr));

	void_ptr = realloc(void_ptr, _msize(void_ptr) + 5*1024);
	printf("After reallocation the memory size: %d Byte\n", _msize(void_ptr));

	free(void_ptr);
	return 0;
}