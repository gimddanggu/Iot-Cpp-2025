#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* ���� ������ (copyConstructor) */
class Person {
	char name[20];
	int age;
public:
	Person(const char* name, int age)
	{
		printf("Constructor Call!!\n");
		strcpy(this->name, name);
		this->age = age;
	}
    // �Ű������� ��ü�� ���� ������ �������·� �޾ƾ� �Ѵ� �� ���� ��ü ���� ����
	Person(const Person& other)	// ���������
	{
		printf("copy Constructor!!\n");
		this->age = other.age;
		strncpy(this->name, other.name, strlen(other.name) + 1);
	}
	void printPerson()
	{
		printf("name %s, age: %d\n", this->name, this->age);
	}
};

int main(void)
{
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();
	return 0;
}
/* ��°�� */
//structor Call!!
//name ȫ�浿, age: 30
//copy Constructor!!
//name ȫ�浿, age : 30
//copy Constructor!!
//name ȫ�浿, age : 30

// ��������ڴ� �⺻���� ����