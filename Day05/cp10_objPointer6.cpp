#include <iostream>
/* �ٿ� ĳ����: �ڽ� �����ͷ� �θ� ��ü�� ����ų �� ����.*/
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
	//dpr = &dobj();	// �ڽ� Ŭ������ �θ� Ŭ������ ����ų �� ����.(�ٿ� ĳ��Ʈ��)
	//dptr = (Base*) & bobj;
	//dptr->show();

	dptr = (Derived*)&bobj;
	dptr->show();
}