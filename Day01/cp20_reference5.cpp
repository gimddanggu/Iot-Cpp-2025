#include <iostream>
/* reference �Լ� - ��ȯ���� �⺻ �ڷ����� ��� */

int func(int anum)
{
	anum++;
	return anum;
}

int main(void) {

	int num;
	num = func(10);
	std::cout << num << std::endl;

	//int& num2 = func(10);		// ���� �߻�
								// ��ȯ���� �⺻�ڷ����� ��쿡 ���������ڿ� ���� ���� �� �� ����
								// ��ȯ���� ����� �ٸ� ���� ����
	const int& res = func(num);	// const �����ڷ� ���� ���� 
	std::cout << res << std::endl;

	return 0;
}