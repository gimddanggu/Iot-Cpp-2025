#include <iostream>
using namespace std;
/* reference (������)*/
// call-by-reference 
// c ���� �����ͷ� �ּҰ� ����
void chFunc(int*);
int main(void)
{
	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;

	chFunc(&n);
	cout << "ȣ�� �� n: " << n << endl;
	return 0;
}

void chFunc(int* p)
{
	*p += 10;
}