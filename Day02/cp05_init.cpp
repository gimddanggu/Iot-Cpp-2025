#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 3;			// ���� �ʱ�ȭ
	int num2(30);			// ���� �ʱ�ȭ
	int num3{ 300 };		// �߰�ȣ ���� �ʱ�ȭ
	int num4 = { 3000 };	// �߰�ȣ ���� �ʱ�ȭ

	int x = 3.14;
	int x1{3.14};			// �Ϲ����� ��ȯ �ȵ� cpp11 ���� ����

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << x << endl;
	cout << x1 << endl;



	return 0;
}