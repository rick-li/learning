
#include "fn.h"


int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 20;

	printf("Result is %d\n", mult(x, y));
	return 0;
}

int mult(int x, int y)
{
	return x*y;
}