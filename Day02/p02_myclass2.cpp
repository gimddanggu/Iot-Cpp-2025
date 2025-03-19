#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 실습2 - 생성자를 이용해서 값 초기화 하기 */
class MyClass {
private:
	int m_id;
	char m_name[20];
	int m_age;

public:
	MyClass(int id, const char* name, int age)
	{
		m_id = id;
		strcpy(m_name, name);
		m_age = age;
	}

	void getData()
	{
		std::cout << "id: " << m_id << " name: " << m_name << " age: " << m_age << std::endl;
	}

};

int main(void)
{
	MyClass obj(1, "김철수", 20);
	obj.getData();
	return 0;
}