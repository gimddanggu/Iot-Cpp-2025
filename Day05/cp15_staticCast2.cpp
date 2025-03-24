#include <iostream>
class Base
{
public:
	void func1()
	{
		std::cout << "Base::func1()" << std::endl;
	}
};
class Derived : public Base
{
public:
	void func1()
	{
		std::cout << "Derived::func1()" << std::endl;
	}
	void func2()
	{
		std::cout << "Derived::func2()" << std::endl;
	}
};
class Derived2 : public Derived
{
public:
	void func1() 
	{
		std::cout << "Derived2::func1()" << std::endl;
	}
	void func2()
	{
		std::cout << "Derived2::func2()" << std::endl;
	}
};
int main(void)
{
	Base* bptr;
	Derived dobj;
	bptr = static_cast<Base*>(&dobj);		// upcasting
	bptr->func1();

	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);	// downcasting
	dptr->func1();
	dptr->func2();


	Derived2* dptr2 = static_cast<Derived2*>(dptr);
	dptr2->func1();
	dptr2->func2();
	return 0;
}