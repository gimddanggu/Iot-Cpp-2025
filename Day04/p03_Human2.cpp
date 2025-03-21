/*
* 실습2
* 전의 Human 객체에서 Human xman; xman = copyman; 의 코드가 오류가 발생하지 않도록 수정하여라.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class Human
{
private:
	char* m_name;
	int m_age;
public:
	Human(const char* name = " ", int age = 0)
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
	Human operator=(const Human& other)
	{
		if (this == &other) return *this;
		
		delete[] m_name;
		
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);
		m_age = other.m_age;

		return *this;


	}
};
int main(void)
{
	Human h1{ "홍명보", 30 };
	h1.showHuman();

	Human copyman(h1);
	copyman.showHuman();

	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}