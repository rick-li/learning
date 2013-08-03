#include <stdio.h>
//otherwise CFLAGS="Wall" give error.

int main(int argc, char const *argv[])
{
	puts("Hellow world.");
	int age = 10;
	printf("My age is %d\n", age);
	char name[] = "rick";
	printf("My name is %s\n", name);

	int nums[6] = {1,2,3,4,5,6};
	printf("nums size is %d\n", sizeof(nums)/sizeof(int));
	printf("size of int is %d\n", sizeof(int));
	return 0;
}