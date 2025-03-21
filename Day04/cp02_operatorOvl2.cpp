#include <iostream>
/* 연산자 오버로딩 - 객체를 더하는 add() 함수 만들기 */
// 객체를 리턴 
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
		/* 새로운 객체 생성 후 리턴 */
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
	p3 = p1.add(p2);		// 복사 생성자가 호출되지 않음, 대입 연산자 호출
	p3.showPoint();
	return 0;
}