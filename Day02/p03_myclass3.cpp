#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 실습3 - name을 동적할당 받아보기 */
class MyClass {
private:
	int m_id;
	char* m_name;
	int m_age;

public:
	MyClass(int id, const char* name, int age)
	{
		m_id = id;
		// c 언어에서는
		/* m_name = (char*)malloc(20);
		if (m_name == NULL) {
			std::cout << "메모리 할당 실패" << std::endl;
		}
		else {
			m_id = id;
			strcpy(m_name, name);
			m_age = age;
		}*/
		m_name = new char[100];
		strcpy(m_name, name);

		m_age = age;
	}
	~MyClass() {
		delete[] m_name;
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