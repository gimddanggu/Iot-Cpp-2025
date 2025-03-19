#include <iostream>
using namespace std;
/* reference (참조자)*/
// call-by-reference 
// c 언어에서 포인터로 주소값 전달
void chFunc(int*);
int main(void)
{
	int n = 10;
	cout << "호출 전 n: " << n << endl;

	chFunc(&n);
	cout << "호출 후 n: " << n << endl;
	return 0;
}

void chFunc(int* p)
{
	*p += 10;
}