#include <iostream>
using namespace std;
// default �Լ�  ������ ��
int func(int n = 0) 
{
	return n * n;
}
int func()
{
	return 10;
}
int main(void)
{
	cout << func(10) << endl;
	//cout << func() << endl;		// �����߻�
	// �Լ� �����ε��߿��� ����Ʈ �Ű������� �Է��� ���� ������ �Լ� ���ǰ� ���� ��
	// �Է¾��� �Լ� ȣ��� ������ �߻��Ѵ�.
	return 0;
}