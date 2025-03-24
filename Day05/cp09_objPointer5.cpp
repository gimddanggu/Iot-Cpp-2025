#include <iostream>
/* 상속에서 객체 포인터 */
/* 부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅된다.*/
class Base
{
public:
	void show()
	{
		printf("Base Class!!");
	}
};
class Derived : public Base	
{
public:
	void show()						// 오버라이딩(재정의)
	{
		printf("Derived Class!!");
	}
};
int main(void)
{
	Base* bptr = nullptr;
	Derived* dptr = nullptr;
	
	Derived obj;			// 파생 클래스 객체
	dptr = &obj;
	dptr->show();

	bptr = &obj;			// 부모타입의 포인터로 자식 클래스 가리킬 수 있음.(업케스팅)
	bptr->show();
	//bptr->Derived::show();

	return 0;
}