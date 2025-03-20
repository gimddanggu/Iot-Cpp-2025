#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) 
	{
		printf("constructor\n");
	}
	// 복사 생성자 추가
	Point(const Point& copy) 
	{
		printf("coppyConstructor\n");
		this->x = copy.x;
		this->y = copy.y;

	}

	const Point& operator+(const Point& p)
	{
		printf("add!!\n");
		return Point(this->x += p.x, this->y += p.y);
	}
	void showValue()
	{
		printf("x: %d, y: %d\n", this->x, this->y);
	}
};
int main(void) 
{
	//Point p1(10, 20);
	//Point p2(30, 40);
	////Point p3;
	//Point p3 = p1.operator+(p2);
	//p3.showValue();

	// 이 경우 객체 생성 3번
	// 임시객체를 p3에 넣었기 때문에

	Point p1(10, 20);
	Point p2(30, 40);
	Point p3;
	p3 = p1.operator+(p2);
	p3.showValue();
	return 0;
}