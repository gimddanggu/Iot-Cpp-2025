#include <iostream>
using namespace std;
/* ���ø� - typename �� �������� ��� */
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