#include<stdio.h>

int main()
{
	int A, B, tmp, *a, *b;
	printf("Enter the value of A:");
	scanf("%d", &A);
	printf("Enter the value of B:");
	scanf("%d", &B);

	a = &A;
	b = &B;
	tmp = A;

	*a = *a + *b;
	printf("After 'A = A + B' the value of A = %d\n", A);

	a = &tmp;
	*b = abs(*a - *b);
	printf("After 'B = |A - B|' the value of B = %d\n", B);

	return 0;
}