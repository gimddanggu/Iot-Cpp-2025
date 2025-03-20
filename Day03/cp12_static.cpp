#include <iostream>
/* static - Ŭ���� �����.(this �����Ͱ� ����.), ��ü���� �����Ѵ�. */
// ��ü����� Ŭ���� ��� ���� �� �˾Ƶα�!
class StaticTest {
public:
	int n;
	static int static_n;		//static ��� ����
	StaticTest();
	void print();
};
int StaticTest::static_n = 10;		// static ������� �ʱ�ȭ�� Ŭ���� �ܺο��� �̷�������Ѵ�.
StaticTest::StaticTest() {
	n = 20;
	//static_n = 10;	���� �߻�
}
void StaticTest::print()
{
	std::cout << "Static_n: " << static_n << "n: " << n << std::endl;
}

int main(void)
{
	StaticTest obj1, obj2;
	obj1.print();
	obj2.print();

	obj2.static_n = 1000;
	obj2.n = 50;
	obj2.print();
	obj1.print();

	return 0;
}