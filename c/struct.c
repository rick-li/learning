#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


struct Person
{
	char *name; //size 4
	int age; //size 4
	int height; //size 4
	int weight; //size 4
	//some times struct size will be bigger than the size of the member's sums
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name %s\n", who->name);
	printf("\tAge %d\n", who->age);
	printf("\tHeight %d\n", who->height);
	printf("\tWeight %d\n", who->weight);
}

void Test_Struct_Pointer()
{
	//a pointer points person
	struct Person *who = malloc(sizeof(struct Person));
	printf("size of struct is  %d\n", sizeof(struct Person));
	printf("struct points to %d\n", who);
	who++;
	printf("after increase, struct points to %d\n", who);
}

int main(int argc, char const *argv[])
{
	Test_Struct_Pointer();
	struct Person *joe = Person_create("Joe Ales", 32, 64, 140);
	Person_print(joe);
	
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
	Person_print(frank);

	Person_destroy(joe);
	Person_destroy(frank);

	//compound initializer
	struct Person ann = {"Ann", 32, 64, 160};
	
	printf("Anns name is %s\n", ann.name);
	printf("Anns name is %s\n", ann.name);

	return 0;
}