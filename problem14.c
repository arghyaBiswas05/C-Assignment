/*
Structure:
Structure is a special kind of data type in C. it can hold differnt type of data and allows
to allocate the memory for each element. we can access all the data at a time.

Union:
Union is a quite similar datatype like structure, it also hold differnet data type but it allows
to allocate the max size of its element.

Ex:
struct studnet
{
	int roll;
	char name[40];
	float height;
};

union student
{
	int roll;
	char name[40];
	float height;
};

here the structure allocate the 48 Bytes(4+40+4) of memory
but the union allocate only 40 Bytes of memory, which is maximum memory need for those 3 elements

** for this the union is highy memory efficient, but it hold only the last data that updated
** the output of this code will show the result. the height is updated last, so the height value is
   showing properly but other filed returning garbage value.

*/

#include<stdio.h>

int main()
{
	struct S_studnet
	{
		int roll;
		char name[40];
		float height;
	};

	union U_student
	{
		int roll;
		char name[40];
		float height;
	};

	struct S_studnet s;
	union U_student u;

	printf("Size of structure: %d\nSize of union:%d\n", sizeof(s), sizeof(u));

	s.roll = 121;
	strcpy(s.name, "Test name");
	s.height = 5.64;

	u.roll = 121;
	strcpy(u.name, "Test name");
	u.height = 5.64;


	printf("\ns.roll:%d\ns.name:%s\ns.height:%f\n",s.roll, s.name, s.height);
	printf("\nu.roll:%d\nu.name:%s\nu.height:%f\n", u.roll, u.name, u.height);

	return 0;
}