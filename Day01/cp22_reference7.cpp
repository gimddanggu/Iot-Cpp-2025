#include <iostream>
/* reference �Լ� - �߸��� ������ ��ȯ */

int& RefFunc(int n)
{
	int num = 20;
	num += n;
	return num;
}

int main(void)
{
	int& ref = RefFunc(10);
	// �Լ� ȣ�� ���
	// �������� num��  ref ��� �� �ٸ� �̸��� �ٰ� ��
	// num�� `��������`�̹Ƿ� �Լ� ȣ�� ���� �޸𸮿��� �����
	// ref�� ����� �޸𸮸� �����Ϸ��� �ϱ� ������ Undefined Behavior(UB) �߻�.
	// �����Ϸ��� ��� ���������, ���� �߻����� �ʴ´�.
	// ���� ������ ������ ��ȯ�ϸ� ���� �� ��!!!!!!!!
	return 0;
}