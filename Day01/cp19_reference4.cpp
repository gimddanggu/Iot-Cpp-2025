#include <iostream>
using namespace std;
/* reference (������) - const ������ */
// const �� ���̸� �����Ӹ� �ƴ϶� ����� ���� �����ϴ�
int addR(int&, int&);
int addCR(const int&, const int&);
int main(void)
{
	int n = 10;
	//int& ref = n;
	const int& ref = 10;			// ������۷����� �����ϸ� ���ͷ��� ������ �� �ִ�.
									// �ӽð�ü�� ������ �� �ִ� ���� ����
									// �� ������ �ּҸ� ref �� ������
	cout << "ref: " << ref << endl;


	// const ������ �������?
	int res1, res2, res3;
	int num1, num2;
	num1 = 20;
	num2 = 7;

	
	res1 = addR(num1, num2);		// �����ڰ� �Ű������϶� (������ ����)
	res2 = addCR(num1, num2);		// const �����ڰ� �Ű������϶�
	res3 = addCR(6, 10);			// ����, ��� �� �� ����

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