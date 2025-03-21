#include <iostream>
/* ������ �����ε� - ��ü�� ���ϴ� add() �Լ� ����� */
// ��ü�� ���� 
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
	Point add(const Point& other) 
	{
		printf("add()\n");
		/* ���ο� ��ü ���� �� ���� */
		return Point(x + other.x, y + other.y);
	}

	void showPoint()
	{
		std::cout << "x: " << x << " y: " << y << std::endl;
	}
};
int main(void)
{
	Point p1(10, 20);
	Point p2(10, 20);

	Point p3;
	p3 = p1.add(p2);		// ���� �����ڰ� ȣ����� ����, ���� ������ ȣ��
	p3.showPoint();
	return 0;
}