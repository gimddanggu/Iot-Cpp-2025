#include <iostream>
using namespace std;
/* dynamic_cast�� �̿��Ͽ� �ٿ�ĳ���ð��� �����Լ��� �־�� �Ѵ�.*/
class Super
{
public:
	virtual void func()
	{
		cout << "Super::func1()" << endl;
	}
	void func1()
	{
		cout << "Super::func2()" << endl;
	}
	void fx()
	{
		cout << "Super::fx()" << endl;
	}
};
class Sub : public Super
{
public:
	void func()
	{
		cout << "Sub::func()" << endl;
	}
	void func2()
	{
		cout << "Sub::func()" << endl;
	}
	void fx()
	{
		cout << "Super::fx()" << endl;
	}
};
int main(void)
{
	Super* sp = new Super{};
	sp->func();
	sp->func1();
	sp->fx();
	cout << "+++++++++++ Upcasting ++++++++++++" << endl;
	Super* sp2 = new Sub{};
	sp2->func();
	sp2->func1();
	sp2->fx();
	//sp2->func2();
	cout << "+++++++++++ Downcasting ++++++++++++" << endl;
	Sub* sp3 = dynamic_cast<Sub*>(sp2);		// �ٿ�ĳ���� �� ���� virtual �� �ʿ�
	sp3->func1();
	sp3->func2();
	sp3->fx();

	delete sp;
	delete sp2;

}