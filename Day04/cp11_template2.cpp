#include <iostream>
using namespace std;
/* ���ø� */
// ���ø��� ����� �Լ����ǰ� �и��� �� ����.
template <typename T>			// ���ø� ����(�Ϲ�ȭ)
T func(T a, T b) {				// ���ø� �Լ�
	cout << "T" << endl;
	return a + b;
}
// ���ø� Ư��ȭ - ���ø� �Ϲ�ȭ�� Ư���� �ڷ����� ó���� ��� ��� 
template <>
int func<int>(int a, int b) {
	cout << "type: <int>"  << endl;
	return a + b;
}

int main(void)
{
	cout << func(10, 20) << endl;
	cout << func(10.5, 20.5) << endl;

	return 0;
}