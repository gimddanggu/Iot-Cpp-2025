/* c ����ü */
#include <iostream>
typedef struct{
	char name[20];
	int age;
	char job[10];
} Human;

/* c style ����ü */
void showHuman(Human h)
{
	printf("name: %s, age: %d, job: %s", h.name, h.age, h.job);
}

int main()
{	
	Human h = { "��ö��", 30, "���" };
	showHuman(h);

	return 0;
}