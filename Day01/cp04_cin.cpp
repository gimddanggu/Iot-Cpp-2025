#include <iostream>
// cin - 입력을 담당하는 객체

int main(void) {
	int inVal;

	std::cout << "숫자입력: ";
	std::cin >> inVal; // >> 연산 방향 다름
	std::cout << "inVal: " << inVal << std::endl;

	// 두 개의 정수 입력받아 출력하기
	int num1;
	int num2;
	std::cout << "두 개의 정수를 입력하세요 >";
	std::cin >> num1 >> num2;
	std::cout << num1 << +", " << num2 << "입력하셨습니다." << std::endl;

	return 0;
}