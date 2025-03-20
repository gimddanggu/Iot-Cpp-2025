#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* ���� ������ (copyConstructor) */
// name�� �����Ҵ� �޾Ƽ� ��������� ������*/
// �����Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�.
class Person {
	char* name;
	int age;
public:
	// ������
	Person(const char* name, int age)
	{
		printf("������ �Դϴ�!\n");
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& p)		// ���� ���������
	{
		printf("���� ������ �Դϴ�!\n");
		this->name = new char[strlen(p.name) + 1];
		strcpy(this->name, p.name);
		this->age = p.age;
	}
	~Person()
	{
		delete[] name;
	}
	
	void printPerson()
	{
		printf("name: %s, age: %d\n", this->name, this->age);
	}
};

int main(void)
{
	Person p1{ "�����", 25 };
	p1.printPerson();

	Person p2(p1);
	p1.printPerson();

	Person p3 = p1;
	p1.printPerson();


	return 0;
}
// ����Ʈ�� �ڵ����� �����޴� ������: ����Ʈ ������, ���� ������, ��ȯ ������, �Ҹ���.. 