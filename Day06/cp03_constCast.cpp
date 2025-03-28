#include <iostream>
using namespace std;
/* const_cast : const 선언을 해지한다. */
int main(void)
{
	int num = 10;
	cout << ++num << endl;

	const int num2 = 10;
	//cout << ++num2 << endl;	// const 이므로 num2 값을 변경 할 수 없음

	int* np = const_cast<int*>(&num2);

	++(*np);
	cout << "num2: " << *np << endl;

	const char str[] = "orange";
	char* cp = const_cast<char*>(str);
	cp[0] = 'O';
	cout << "str: " << str << endl;



}