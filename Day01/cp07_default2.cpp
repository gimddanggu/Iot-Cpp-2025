#include <iostream>
using namespace std;

int coordinates(int x, int y = 0, int z = 0);		
// default ���� ����(����)���� �ۼ��Ѵ�.
// default ���� ���� �� ������ ���� �� �����ʺ��� ������� �ۼ��Ѵ�.
int main(void)
{
	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
	cout << "(10, def, def): " << coordinates(10) << endl;


	return 0;
}

int coordinates(int x, int y, int z)
{
	int res = 0;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// ����
	return sqrt(res);								// ������
}