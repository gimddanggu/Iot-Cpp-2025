#include <iostream>
/* ��ȯ ������ */
// explicit Ű����� �ڵ���ȯ����

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {	// explicit ������ ��ȯ ����
		printf("��ȯ ������ ȣ��");
		this->value = value;
	}

	void printMyClass()
	{
		printf("value: %d\n", value);
	}
};
int main(void)
{
	// MyClass obj = 10;		// ��ȯ ������ ȣ�� - ��ü�� ��ȯ�� �Ͼ
	// obj.printMyClass();			

	// explicit Ű����� ���� ��ȯ ������ ȣ�� x 
	// �Ϲ� �����ڷθ� ����� �� �ִ�.

	MyClass obj2(20);
	obj2.printMyClass();
	return 0;
}