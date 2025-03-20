#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 복사 생성자 (copyConstructor) */
// name을 동적할당 받아서 복사생성자 만들어보기*/
// 동적할당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장이 되어야 한다.
class Person {
	char* name;
	int age;
public:
	// 생성자
	Person(const char* name, int age)
	{
		printf("생성자 입니다!\n");
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& p)		// 깊은 복사생성자
	{
		printf("복사 생성자 입니다!\n");
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
	Person p1{ "김다현", 25 };
	p1.printPerson();

	Person p2(p1);
	p1.printPerson();

	Person p3 = p1;
	p1.printPerson();


	return 0;
}
// 디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 변환 생성자, 소멸자.. 