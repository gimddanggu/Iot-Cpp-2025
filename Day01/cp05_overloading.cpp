#include <iostream>
/* �Լ� �����ε�(��������) - �̸��� ������ �Ű������� Ÿ���̳� ������ �ٸ��� �ٸ� �Լ��̴�. */
int func()
{
	return 10;
}
int func(char c)
{
	return c;
}
int func(int n)
{
	return 10 + n;
}
int func(int n1, int n2)
{
	return n1 + n2;
}
int main(void)
{
	std::cout << func() << std::endl;
	std::cout << func('a') << std::endl;
	std::cout << func(10) << std::endl;
	std::cout << func(10, 50) << std::endl;

	return 0;
}