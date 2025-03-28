#include <iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	MyClass(int n) : num(n)
	{
		cout << num << " constructor " << endl;
	}
	~MyClass() 
	{
		cout << num << " destructor " << endl;
	}
};

int main()
{
	MyClass obj{ 10 };
	MyClass obj2 = MyClass{ 20 };
	MyClass{ 30 };				// 임식객체 생성

	cout << "bye~~" << std::endl;

	return 0;

}