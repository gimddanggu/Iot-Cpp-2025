#include <iostream>
/* ��ũ�δ� ��ó���Ⱑ ó��������, inline �Լ��� �����Ϸ��� ó��*/
#define SQUARE(x) ((x)*(x))

inline int funct(int x)
{
	return x * x;
}

int main()
{	
	std::cout << SQUARE(2) << std::endl;
	std::cout << funct(2) << std::endl;

	return 0;
}