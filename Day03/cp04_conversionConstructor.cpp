#include <iostream>
/* ��ȯ ������ - Ư�� Ÿ���� ���� ��ü�� ��ȯ�� �� ȣ��Ǵ� ������ */
// Ư�� Ÿ���� ���� ��ü�� ��ȯ�� �� ȣ��Ǵ� ������
// �Է��� �Ѱ��� ����

class MyClass {
private:
	int value;
public:
	MyClass(int value) {
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
	MyClass obj = 10;		// ��ȯ ������
	obj.printMyClass();
	MyClass obj2(20);
	obj2.printMyClass();
	return 0;
}