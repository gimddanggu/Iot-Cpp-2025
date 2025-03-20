#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* �̵������� */
// r-value reference �� �Ķ���ͷ� ���� �̵� ������

class Human {
private:
	char name[10];
	int age;
public:
	// �Է�2�� �޴� ������
	Human(const char* name, int age) 
	{
		printf("�Է�2�� ������ ȣ��\n");
		strcpy(this->name, name);
		this->age = age;
	}

	// ���� ������
	Human(const Human& copy)
	{
		printf("���� ������ ȣ��\n");
		strcpy(this->name, copy.name);
		this->age = copy.age;
	}
	// �̵�������
	Human(Human&& move) noexcept
	{
		printf("�̵� ������ ȣ��\n");
		strcpy(this->name, move.name);
		this->age = move.age;

		// move.name = nullptr;
		// move.age = 0;
	}
	void printHuman() 
	{
		printf("name: %s, age: %d\n", this->name, this->age);
	}
};

int main()
{
	Human h1{"ȫ�浿", 100 };
	h1.printHuman();

	Human h2(h1);
	h2.printHuman();
	
	Human h3(std::move(h1));
	h3.printHuman();
	return 0;
}