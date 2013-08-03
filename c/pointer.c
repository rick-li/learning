#include <stdio.h>

int main(int argc, char const *argv[])
{
	//string array
	char *names[] = {"n1", "n2"};

	int count = sizeof(names)/sizeof(char*);
	printf("size of str ary is %d\n", sizeof(names)/sizeof(char*));
	
	for (int i = 0; i < count; ++i)
	{
		printf("%s\n", names[i]);
	}

	printf("===============\n");

	char **cur_name = names;
	printf("pointer is %lu\n", cur_name);
	printf("pointer is %lu\n", &names);
	for (int i = 0; i < count; ++i)	
	{
		
		printf("pointer is %d\n", cur_name + i);
		printf("%s\n", *(cur_name + i));
	}

	int intv = 1234567;
	// int *intp = intv;
	// printf("%d\n", intp);
	int *intp = &intv;
	printf("%d\n", intp);
	//pointer++ will increase the poistions of the number of type.
	//int pointer increase 4.
	intp++;
	printf("%d\n", intp);

	return 0;
}