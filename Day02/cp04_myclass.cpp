#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* Ŭ���� */
// ���ǿ� ������ �и��� �� ����
class MyClass {
private:
	int m_id;
	char* m_name;
	int m_age;

public:
	MyClass(int id, const char* name, int age);
	~MyClass();
	void getData(void) const;

};
// ������
MyClass::MyClass(int id, const char* name, int age)
{
	m_id = id;
	m_name = new char[strlen(name) + 1];		// �����Ҵ�
	//m_name = name			// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
	strcpy(m_name, name);

	m_age = age;
}
MyClass::~MyClass() { delete[] m_name; }

void MyClass::getData() const
{
	// ���� ������ ������� ����
	std::cout << "id: " << m_id << " name: " << m_name << " age: " << m_age << std::endl;
}
int main(void)
{
	MyClass obj(1, "��ö��", 20);
	obj.getData();
	return 0;
}