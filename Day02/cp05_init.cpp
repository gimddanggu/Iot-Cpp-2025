#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 3;			// 복사 초기화
	int num2(30);			// 직접 초기화
	int num3{ 300 };		// 중괄호 직접 초기화
	int num4 = { 3000 };	// 중괄호 복사 초기화

	int x = 3.14;
	int x1{3.14};			// 암묵적인 변환 안됨 cpp11 부터 지원

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << x << endl;
	cout << x1 << endl;



	return 0;
}