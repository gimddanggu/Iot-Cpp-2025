/*
* 실습1
* char 포인터의 name, int 타입의 age, 출력을 담당하는 showHuman()을 가지는 Houman 클래스가 있다.
* name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
* man 객체를 복사하여 copyman 객체를 생성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class Human
{
private:
	char* m_name;
	int m_age;
public:
	Human(const char* name, int age) 
	{
		printf("생성자\n");
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);

		m_age = age;
	}
	
	// 복사 생성자
	Human(const Human& other)
	{
		printf("복사 생성자\n");
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);

		m_age = other.m_age;
	}
	~Human()	// 소멸자
	{
		delete[] m_name;
	}
	void showHuman()
	{
		printf("name: %s, age: %d\n", m_name, m_age);
	}
};
int main(void)
{
	Human h1{ "홍명보", 30 };
	h1.showHuman();

	Human h2(h1);
	h2.showHuman();

	return 0;
}