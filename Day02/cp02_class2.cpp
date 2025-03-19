#include <iostream>

class AClass {
private:
	int n1;
	int n2;

public:
	void setData(int val1, int val2) 
	{
		n1 = val1;
		n2 = val2;
	}
	void getData() 
	{
		std::cout << "AClass 입니다" << std::endl;
		std::cout << "AClass n1값: " << n1 << std::endl;
		std::cout << "AClass n2값: " << n2 << std::endl;

	}
};

int main()
{
	AClass obj;
	obj.setData(10, 70);
	obj.getData();

	return 0;
}