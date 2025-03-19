#include <iostream>
/* 함수 오버로딩(다중정의) - 이름은 같은데 매개변수의 타입이나 갯수가 다르면 다른 함수이다. */
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