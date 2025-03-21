#include <iostream>
/* add�� operator+ ����Լ� ������, ���ͷ��� ���� �� �ֵ���*/
class MyClass
{
private:
	int x, y;
public:
	// ������
	MyClass(int ax, int ay) : x(ax), y(ay) {}

	// ���� �Ҵ��� �����Ƿ� ���� �����ڴ� ������ �ʰڴ�
	// ����Ʈ ���� �����ڷ� ����
	
	// add �Լ� : ���� ��ȯ �ϵ���
	MyClass& add(const MyClass& other)		// ��ü�� �޾ƿ��� �� ������ �����Ƿ� const &
	{
		this->x += other.x;
		this->y += other.y;

		return *this;

	}
	// + : ���ο� ��ü ��ȯ �ϵ���
	MyClass operator+(const MyClass& other)
	{
		return MyClass(x + other.x, y + other.y);
	}

	MyClass operator+(int num)
	{
		return MyClass(x + num, y + num);
	}
	void showMyClss() {
		std::cout << "x: " << x << " y: " << y << std::endl;
	}
};
int main(void)
{
	MyClass obj(10, 20);
	MyClass obj2(20, 30);
	MyClass obj3 = obj.add(obj2);
	obj3.showMyClss();
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClss();
	MyClass obj5 = obj4 + 100;
	obj5.showMyClss();


	return 0;
}