#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	//string is just array.
	char name[2] = {'a'};
	name[1] = '\0';
	char *name2 = "asdfasdf";
	printf("%s\n", name);
	printf("%s\n", name2);
	name2[3] = '!';
	printf("%s\n", name2);

	//string comparison
	char *s1 = "aaaa";
	char *s2 = "aaaaa";
	int res = strcmp(s1, s2);
	printf("result is %d\n", res);

	
	return 0;
}