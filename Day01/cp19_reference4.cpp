#include <iostream>
using namespace std;
/* reference (참조자) - const 참조자 */
// const 를 붙이면 변수뿐만 아니라 상수도 참조 가능하다
int addR(int&, int&);
int addCR(const int&, const int&);
int main(void)
{
	int n = 10;
	//int& ref = n;
	const int& ref = 10;			// 상수레퍼런스로 선언하면 리터럴도 참조할 수 있다.
									// 임시객체를 저장할 수 있는 공간 생성
									// 그 공간의 주소를 ref 가 참조함
	cout << "ref: " << ref << endl;


	// const 참조사 사용이유?
	int res1, res2, res3;
	int num1, num2;
	num1 = 20;
	num2 = 7;

	
	res1 = addR(num1, num2);		// 참조자가 매개변수일때 (변수만 가능)
	res2 = addCR(num1, num2);		// const 참조자가 매개변수일때
	res3 = addCR(6, 10);			// 변수, 상수 둘 다 가능

	cout << "res1: " << res1 << endl;
	cout << "res2: " << res2 << endl;
	cout << "ref3: " << res3 << endl;

	return 0;
}

int addR(int& num1, int& num2)
{
	return num1 + num2;
}
int addCR(const int& num1, const int& num2)
{
	return num1 + num2;
}