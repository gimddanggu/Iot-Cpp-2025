#include <iostream>
/* reference �Լ� - ��ȯ���� �������� ��� */

int& func(int& ref)
{
	ref++;
	return ref;
}
int main(void)
{
	std::cout << "=== �����ڿ� ������ ��� ===" << std::endl;

	int num1 = 10;		
	int &num2 = func(num1);			// ���� ��ȯ���� �����ڿ� ���� ����

	num1++;
	num2++;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;

	std::cout << "=== ������ ������ ��� ==="<< std::endl;
	int num3 = 10;
	int num4 = func(num3);			// ���� ��ȯ���� ������ ���� ����
									// ������ ����
	
	num3++;
	num4 += 100;

	std::cout << "num1: " << num3 << std::endl;
	std::cout << "num2: " << num4 << std::endl;
}