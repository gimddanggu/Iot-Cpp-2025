/* c 구조체 */
#include <iostream>
typedef struct{
	char name[20];
	int age;
	char job[10];
} Human;

/* c style 구조체 */
void showHuman(Human h)
{
	printf("name: %s, age: %d, job: %s", h.name, h.age, h.job);
}

int main()
{	
	Human h = { "김철수", 30, "백수" };
	showHuman(h);

	return 0;
}