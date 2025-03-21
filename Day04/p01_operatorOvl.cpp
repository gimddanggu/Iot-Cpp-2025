#include <iostream>
/* add와 operator+ 멤버함수 만들어보기, 리터럴도 더할 수 있도록*/
class MyClass
{
private:
	int x, y;
public:
	// 생성자
	MyClass(int ax, int ay) : x(ax), y(ay) {}

	// 동적 할당이 없으므로 복사 생성자는 만들지 않겠다
	// 디폴트 복사 생성자로 ㄱㄱ
	
	// add 함수 : 참조 반환 하도록
	MyClass& add(const MyClass& other)		// 객체를 받아오고 값 변경이 없으므로 const &
	{
		this->x += other.x;
		this->y += other.y;

		return *this;

	}
	// + : 새로운 객체 반환 하도록
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