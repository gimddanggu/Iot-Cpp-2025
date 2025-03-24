#include <iostream>
/* �߻� �ڷ����� �̿��ؼ� ���� �Ҵ�� ��ü�� ������ ���� �޸� ���� �� ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ���� �߻� 
	���� ���� Ŭ������ �Ҹ��ڸ� �������� ���� ��Ÿ���� �Ҹ��� ȣ���� �����Ѵ�. */
class CTest
{
private:
	int num;
public:
	CTest(int anum) : num(anum)
	{
		std::cout << num << "CTest constructur" << std::endl;
	}
	virtual ~CTest()		// ����Ҹ���
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