/* virtual - class  - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스 
추상클래스는 객체를 생성할 수 없다. */
#include <iostream>

class Cinterface
{
public:
	Cinterface()
	{
		std::cout << "CInterface constructor" << std::endl;
	}
	virtual void getData() const = 0;		// 순수 가상 함수
											// 몸체가 없음 > 객체 생성 불가 > 상속받은 객체가 오버라이딩 하여 재정의 해야됨.
};
class CinSub : public Cinterface
{
public:
	CinSub()
	{
		std::cout << "CinSub constructor" << std::endl;
	}
	void getData() const override 
	{
		std::cout << "Pure Virtual function()" << std::endl;
	}
};
int main()
{
	CinSub obj;
	obj.getData();

	return 0;
}