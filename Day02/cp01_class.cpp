// class 이름은 첫글자 대문자
#include <iostream>
using namespace std;

class A {
public:
	int m_num;				// 멤버변수 (속성)
	
	void setter(int num) {
		m_num = num;
	}
	void print()			// 멤버함수(기능) 메서드
	{
		cout << "num: " << m_num << endl;
		cout << "나는 A 클래스의 인스턴스입니다. " << m_num << endl;

	}
};
int main(void)
{
	A obj;
	obj.print();
	obj.setter(100);
	obj.print();

	return 0;
}