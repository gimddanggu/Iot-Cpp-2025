// class �̸��� ù���� �빮��
#include <iostream>
using namespace std;

class A {
public:
	int m_num;				// ������� (�Ӽ�)
	
	void setter(int num) {
		m_num = num;
	}
	void print()			// ����Լ�(���) �޼���
	{
		cout << "num: " << m_num << endl;
		cout << "���� A Ŭ������ �ν��Ͻ��Դϴ�. " << m_num << endl;

	}
};
int main(void)
{
	A obj;
	obj.print();
	obj.setter(100);
	obj.print();

	return 0;
}