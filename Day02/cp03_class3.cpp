#include <iostream>
/* ������ */
// ������ ȣ��� ��ü�� ����� ����.
// ��ü ���� �� ������ �´� �����ڰ� ������ ��ü�� �������� �ʴ´�.
// �����ڴ� �ʱ�ȭ��ɿ� ����Ѵ�.
// �����ڴ� �����ε��� �����ϴ� (�Լ��ϱ�!!)
// ���α׷��Ӱ� �����ڸ� �ۼ��ϸ� �� �̻� ����Ʈ �����ڴ� �������� �ʴ´�. 

class MyClass {
private:
	int m_num1;
	int m_num2;

public:
	MyClass() = default;
	MyClass(int num1)
	{
		m_num1 = num1;
	}
	MyClass(int num1, int num2)
	{
		m_num1 = num1;
		m_num2 = num2;

	}
	~MyClass() {}				// �Ҹ���
	void printData()
	{
		std::cout << "���� MyClass�� �ν��Ͻ� �Դϴ�." << std::endl;
		std::cout << "m_num1: " << m_num1 << ", m_num2: " << m_num2 << std::endl;
	}

};
int main(void)
{
	MyClass obj;				// ����Ʈ ������ ��������
								// �ٸ� ������ ������� ������ �⺻ ������ ������ ��
	MyClass obj2(100, 200);	// ������ ������ ��
	obj2.printData();
	return 0;
}