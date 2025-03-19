#include <iostream>
using namespace std; // std::cout 대신 cout만 써도 됨

int main(void)
{
	int num = 100;
	char str[100] = "홍길동";
	double d = 3.14;
	// 서식문자, 자료형 따로 적어주지 않아도 알아서 출력해줌
	std::cout << "abcdefg" << std::endl;
	std::cout << num << std::endl;
	std::cout << str << std::endl;
	std::cout << d << std::endl;

	// 한 번에 출력
	std::cout <<"문자열 출력: "<< num << ' ' << str << ' ' << d << std::endl;

	return 0;
}