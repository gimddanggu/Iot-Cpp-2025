#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 복사 생성자 (copyConstructor) */
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
    // 매개변수로 객체를 받을 때에는 참조형태로 받아야 한다 → 무한 객체 생성 문제
	Person(const Person& other)	// 복사생성자
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
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();
	return 0;
}
/* 출력결과 */
//structor Call!!
//name 홍길동, age: 30
//copy Constructor!!
//name 홍길동, age : 30
//copy Constructor!!
//name 홍길동, age : 30

// 복사생성자는 기본으로 제공