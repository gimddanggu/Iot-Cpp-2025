#include <iostream>
using namespace std;

class MyClass
{
private:
	int num;
public:
	void setNum(int n) { num = n; }
	void print() const
	{
		//num++;		// const 함수이기 때문에 값 변경 불가
		cout << "Before: " << num << endl;
		const_cast<MyClass*>(this)->num--;
		cout << "after: " << num << endl;
	}
};

int main(void)
{
	MyClass obj;
	obj.setNum(10);
	obj.print();
	return 0;
}