#include <iostream>

int main(void)
{
	int num = 100;		// c 스타일 변수 선언
	int num2(100);		// c++ 스타일 변수 선언 - 객체
						// 함수랑 비슷해서 헷갈림

	std::cout << num << std::endl;
	std::cout << num2 << std::endl;

	return 0;
}