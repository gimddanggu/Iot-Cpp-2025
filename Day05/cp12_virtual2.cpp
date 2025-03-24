/* virtual - class  - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� �Լ��� ������ Ŭ���� 
�߻�Ŭ������ ��ü�� ������ �� ����. */
#include <iostream>

class Cinterface
{
public:
	Cinterface()
	{
		std::cout << "CInterface constructor" << std::endl;
	}
	virtual void getData() const = 0;		// ���� ���� �Լ�
											// ��ü�� ���� > ��ü ���� �Ұ� > ��ӹ��� ��ü�� �������̵� �Ͽ� ������ �ؾߵ�.
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