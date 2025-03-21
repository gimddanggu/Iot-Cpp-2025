#include <iostream>
using namespace std;
/* 템플릿 - typename 이 여러개인 경우 */
template <typename T, typename T2> 
void func(T a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}

int main()
{
	func(10, 3.14);
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.141592);
}