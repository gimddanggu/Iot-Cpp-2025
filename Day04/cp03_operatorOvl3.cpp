#include <iostream>
/* ������ �����ε� - ��ü�� ���ϴ� add() �Լ� ����� */
// ������ ����
class Point
{
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay)
	{
		printf("Constructor!!\n");
	}
	Point(const Point& other)
	{
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	Point& add(const Point& other)
	{
		printf("add()\n");
		/* ���ο� ��ü ���� �� ���� */
		//return Point(x + other.x, y + other.y);
		/* ������ ���� */
		x += other.x;
		y += other.y;
		return *this;
	}

	void showPoint()
	{
		std::cout << "x: " << x << " y: " << y << std::endl;
	}
};
int main(void)
{
	Point p1(10, 20);
	Point p2(30, 40);
	std::cout << "-----------------------------" << std::endl;
	// ���� ������ ȣ��
	Point p3;
	p3 = p1.add(p2);		// ���� �����ڰ� ȣ����� ����
	p3.showPoint();
	/* ��°�� */
	// Constructor!!
	// Constructor!!
	// ---------------------------- -
	// Constructor!!
	// add()
	// x: 40 y : 60

	// ���� ������ ȣ��
	Point p4 = p1.add(p2);
	p4.showPoint();
	p1.showPoint();
	return 0;

	/*	Q4-2. ��ü ����� ���ÿ� �ʱ�ȭ �ϸ� ���� �����ڰ� ȣ��ǰ� �����ϸ� ���Կ����ڰ� ȣ��Ǵ� ���� */
	// ���� ������ : �̹� �����ϴ� ��ü�� �ٸ� ��ü�� �����ϸ� ȣ���
	// ���� ������ : ��ü�� ���� ������ �� �ٸ� ��ü�� �ʱ�ȭ�ϸ� ȣ���


}