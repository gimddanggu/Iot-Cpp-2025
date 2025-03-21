/*
* �ǽ�1
* char �������� name, int Ÿ���� age, ����� ����ϴ� showHuman()�� ������ Houman Ŭ������ �ִ�.
* name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
* man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
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
		printf("������\n");
		m_name = new char[strlen(name) + 1];
		strcpy(m_name, name);

		m_age = age;
	}
	
	// ���� ������
	Human(const Human& other)
	{
		printf("���� ������\n");
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);

		m_age = other.m_age;
	}
	~Human()	// �Ҹ���
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
	Human h1{ "ȫ��", 30 };
	h1.showHuman();

	Human h2(h1);
	h2.showHuman();

	return 0;
}