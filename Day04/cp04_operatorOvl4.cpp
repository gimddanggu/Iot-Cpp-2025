#include <iostream>
/* 멤버함수 연산자 오버로딩: p1 operator연산자(p2) ex) p1 operator+(p2) */
class MyClass
{
private:
	int value;
public:
	MyClass(int n) : value{ n } {}

	// 연산자 오버로딩
	MyClass operator+(const MyClass& mc)
	{
		printf("+ overloading");
		return MyClass(value + mc.value);
	}
	void showMyClass() 
	{
		printf("value: %d\n", value);
	}
};
int main(void)
{
	MyClass obj1(10);
	obj1.showMyClass();

	MyClass obj2(obj1);			// 디폴트 복사 생성자 호출
	obj2.showMyClass();

	MyClass obj3 = obj2;		// 객체 생성과 동시에 초기화 - 디폴트 복사 생성자 호출
	obj3.showMyClass();

	MyClass obj4 = obj1 + obj2 + obj3;	// 객체를 더한 결과를 가지고 객체 생성
										// 기본 자료형은 되어 있지만 다른 연산자는 직접 오버로딩해서 구현해야 됨
	obj4.showMyClass();

	MyClass obj5 = (obj1.operator+(obj2)).operator+(obj4);
	obj5.showMyClass();
}