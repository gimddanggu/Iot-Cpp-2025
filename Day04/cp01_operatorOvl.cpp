#include <iostream>
/* ������ �����ε� */
class MyClass
{
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) {}
	void showMyClass() 
	{
		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
	}
};

int main(void)
{
	MyClass obj1{ 1, 2, "ȫ�浿" };
	obj1.showMyClass();

	MyClass obj2;
	obj2 = obj1;					// ������ �����ε�(=)
	obj2.showMyClass();
	// Q4-1. �̰� �� ������ �����ε��� �����ΰ�?
	// ���� �����ڸ� ��� �� obj1 = obj �̷� ���� ��� �� ������


	// ----- ���� ��� ��
	//MyClass obj3{ 10, 20 };
	//MyClass obj4{ 30, 40 };
	//MyClass obj4 = obj1 + obj2;		// ������ �����ε�(+) �ʿ�


	return 0;
}