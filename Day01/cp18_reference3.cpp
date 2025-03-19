#include <iostream>
using namespace std;
/* reference (참조자)*/
int main(void)
{
	int num = 10, num2 = 100;
	int& ref = num;			// num의 메모리 공간에 ref라는 별명이 붙는다.
	int* pn = &num;
	int& rref = ref;		// 포인터 변수를 참조할 수 있다.
	rref = num2;
	cout << rref << ", " << num2 << endl;

	// 주의
	// int& rref;
	// rref = ref
	// 선언과 동시에 초기화 해야된다.

	num++;
	ref++;
	(*pn)++;

	cout << "num++: " << num << endl;
	cout << "ref++: " << ref << endl;
	cout << "*(pn)++: " << *pn << endl;
	
	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;

	return 0;
}