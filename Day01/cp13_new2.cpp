#include <iostream>
using namespace std;
/*  �޸� ���� �Ҵ� : new - delete 
	�ڷ��� ������ = new �ڷ���(ũ��)
	new�� �����ڸ� ȣ���Ѵ�. �� new�� ��ü�� ������Ų��.
	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־�� �Ѵ�.
*/

int main(void)
{
	int size;
	int* pary;
	
	//int *pn = new int;			// �� ������ int�� ���� ���� �Ҵ� malloc
	//delete pn						// �Ҵ�� �޸� ���� ��ȯ free

	cout << "ũ�� >> ";
	cin >> size;

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	cout << pary[0] << ", " << pary[1] << ", " << pary[2];

	delete[] pary;				// int�� �迭�� �Ҹ�
	
	return 0;
}