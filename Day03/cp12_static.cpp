#include <iostream>
/* static - 클래스 멤버다.(this 포인터가 없다.), 객체들이 공유한다. */
// 객체멤버와 클래스 멤버 구분 잘 알아두기!
class StaticTest {
public:
	int n;
	static int static_n;		//static 멤버 변수
	StaticTest();
	void print();
};
int StaticTest::static_n = 10;		// static 멤버변수 초기화는 클래스 외부에서 이루어져야한다.
StaticTest::StaticTest() {
	n = 20;
	//static_n = 10;	오류 발생
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