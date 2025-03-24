#include <iostream>
/* 다운 캐스팅: 자식 포인터로 부모 객체를 가리킬 수 없다.*/
class Base
{
public:
	void show() 
	{
		printf("Base Class");
	}
};
class Derived : public Base
{
public:
	void show()
	{
		printf("Derive Class");
	}

};
int main(void)
{
	Base bobj;
	Derived* dptr = nullptr;
	//dpr = &dobj();	// 자식 클래스로 부모 클래스를 가리킬 수 없다.(다운 캐스트팅)
	//dptr = (Base*) & bobj;
	//dptr->show();

	dptr = (Derived*)&bobj;
	dptr->show();
}