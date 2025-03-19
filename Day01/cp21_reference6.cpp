#include <iostream>
/* reference 함수 - 반환형이 참조형인 경우 */

int& func(int& ref)
{
	ref++;
	return ref;
}
int main(void)
{
	std::cout << "=== 참조자에 저장한 경우 ===" << std::endl;

	int num1 = 10;		
	int &num2 = func(num1);			// 참조 반환형을 참조자에 저장 가능

	num1++;
	num2++;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;

	std::cout << "=== 변수에 저장한 경우 ==="<< std::endl;
	int num3 = 10;
	int num4 = func(num3);			// 참조 반환형을 변수에 저장 가능
									// 값으로 저장
	
	num3++;
	num4 += 100;

	std::cout << "num1: " << num3 << std::endl;
	std::cout << "num2: " << num4 << std::endl;
}