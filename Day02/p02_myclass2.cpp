#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* �ǽ�2 - �����ڸ� �̿��ؼ� �� �ʱ�ȭ �ϱ� */
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
	MyClass obj(1, "��ö��", 20);
	obj.getData();
	return 0;
}