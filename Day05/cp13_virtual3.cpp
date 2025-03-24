#include <iostream>
/* 추상 자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수 발생 
	따라서 상위 클래스의 소멸자를 가상으로 만들어서 실타입의 소멸자 호출을 유도한다. */
class CTest
{
private:
	int num;
public:
	CTest(int anum) : num(anum)
	{
		std::cout << num << "CTest constructur" << std::endl;
	}
	virtual ~CTest()		// 가상소멸자
	{
		std::cout << num << "CTest destructor" << std::endl;
	}
	virtual void vfunc()
	{
		std::cout << "CTest virtual function()" << std::endl;
	}
	void func()
	{
		std::cout << "CTest function()" << std::endl;
	}
};
class CTestSub : public CTest
{
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2) 
	{
		std::cout << subN << "CTestSub constructor" << std::endl;
		
	}
	~CTestSub () 
	{
		std::cout << subN << "CTestSub destructor" << std::endl;
	}
	void vfunc()
	{
		std::cout << "CTestSub function() override" << std::endl;
	}
};
int main(void)
{
	CTest obj(1);
	std::cout << "=============================" << std::endl;
	CTestSub obj2(2, 22);
	std::cout << "=============================" << std::endl;
	obj.func();
	obj.vfunc();
	std::cout << "=============================" << std::endl;
	obj2.func();
	obj2.vfunc();

	CTest* ptr = new CTestSub(3, 33);

	delete ptr;
	return 0;
}