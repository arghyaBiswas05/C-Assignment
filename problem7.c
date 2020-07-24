#include<stdio.h>

int main()
{
	int A = 1;
	int B = 2;
	int C = 3;
	int pos;
	printf("Enter the value of N:");
	scanf("%d",&pos);

	//1,2,3,6,11,20,37....
	if (pos >= 0)
	{
		switch (pos)
		{
		case 0:
			printf("Nth value: 1\n");
			break;
		case 1:
			printf("Nth value: 2\n");
			break;
		case 2:
			printf("Nth value: 3\n");
			break;
		default:
		{
			int tmp_pos = 3;
			while (tmp_pos <= pos)
			{
				int tmp_c = C;
				int tmp_b = B;
				C = A + B + C;
				B = tmp_c;
				A = tmp_b;

				tmp_pos++;
			}
			printf("Nth value: %d\n", C);
			break;
		}
		}
	}
	else
		printf("Invalid input\n");
	return 0;
}
