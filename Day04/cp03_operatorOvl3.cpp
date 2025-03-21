#include <iostream>
/* 연산자 오버로딩 - 객체를 더하는 add() 함수 만들기 */
// 참조를 리턴
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
		/* 새로운 객체 생성 후 리턴 */
		//return Point(x + other.x, y + other.y);
		/* 참조로 리턴 */
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
	// 대입 연산자 호출
	Point p3;
	p3 = p1.add(p2);		// 복사 생성자가 호출되지 않음
	p3.showPoint();
	/* 출력결과 */
	// Constructor!!
	// Constructor!!
	// ---------------------------- -
	// Constructor!!
	// add()
	// x: 40 y : 60

	// 복사 생성자 호출
	Point p4 = p1.add(p2);
	p4.showPoint();
	p1.showPoint();
	return 0;

	/*	Q4-2. 객체 선언과 동시에 초기화 하면 복사 생성자가 호출되고 따로하면 대입연산자가 호출되는 이유 */
	// 대입 연산자 : 이미 존재하는 객체에 다른 객체를 대입하면 호출됨
	// 복사 생성자 : 객체가 새로 생성될 때 다른 객체로 초기화하면 호출됨


}