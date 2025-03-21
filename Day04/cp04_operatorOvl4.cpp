#include <iostream>
/* ����Լ� ������ �����ε�: p1 operator������(p2) ex) p1 operator+(p2) */
class MyClass
{
private:
	int value;
public:
	MyClass(int n) : value{ n } {}

	// ������ �����ε�
	MyClass operator+(const MyClass& mc)
	{
		printf("+ overloading");
		return MyClass(value + mc.value);
	}
	void showMyClass() 
	{
		printf("value: %d\n", value);
	}
};
int main(void)
{
	MyClass obj1(10);
	obj1.showMyClass();

	MyClass obj2(obj1);			// ����Ʈ ���� ������ ȣ��
	obj2.showMyClass();

	MyClass obj3 = obj2;		// ��ü ������ ���ÿ� �ʱ�ȭ - ����Ʈ ���� ������ ȣ��
	obj3.showMyClass();

	MyClass obj4 = obj1 + obj2 + obj3;	// ��ü�� ���� ����� ������ ��ü ����
										// �⺻ �ڷ����� �Ǿ� ������ �ٸ� �����ڴ� ���� �����ε��ؼ� �����ؾ� ��
	obj4.showMyClass();

	MyClass obj5 = (obj1.operator+(obj2)).operator+(obj4);
	obj5.showMyClass();
}