#include <iostream>
/* 클래스 - 멤버 초기화 */
// 콜론(:) 초기화 해야 하는 경우
// 1) 상수 멤버 변수
// 2) 참조자 멤버 변수
// 3) 객체 멤버 변수
class ConstClass {
private:
	int m_value1;
	const int m_value2;		// 상수 멤버 변수는 객체 생성 될 때 반드시 초기화가 되어야 함
public:
	//ConstClass(int value1, int value2) { m_value1 = value1; m_value2 = value2; }		// 상수는 선언과 동시에 초기화해줘야 함
	ConstClass(int value1, int value2) : m_value2(value2) { m_value1 = value1; }
	void showValue() 
	{
		printf("m_value1: %d\n", m_value1);
		printf("m_value2: %d\n", m_value2);

	}
};
class RefClass {
private:
	int& ref;		// 참조자 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
public:
	RefClass(int& r) : ref(r) { }
	void showValue() {
		printf("ref: %d\n", ref);
	}
};

class Position {
private:
	int m_x;
	int m_y;
public:
	Position(int x, int y) { 
		std::cout << "Position constructor" << std::endl;
		m_x = x, m_y = y; 
	}
	void getData() {
		printf("m_x: %d\n", m_x);
		printf("m_y: %d\n", m_y);
	}
};

class ObjClass {
private:
	Position pos;		// 객체 멤버변수
public:
	ObjClass(int x, int y) : pos(x, y) { std::cout << "ObjClass constructor!!" << std::endl; }
	void showValue() {
		pos.getData();


	}
};
int main(void)
{
	//(1)
	ConstClass obj(10, 20);
	obj.showValue();

	//(2)
	int n = 50;
	RefClass obj2(n);
	obj2.showValue();
	
	//(3)
	ObjClass obj3(3, 6);
	obj3.showValue();
	return 0;
}