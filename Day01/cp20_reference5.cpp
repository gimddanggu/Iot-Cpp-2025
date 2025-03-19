#include <iostream>
/* reference 함수 - 반환형이 기본 자료형인 경우 */

int func(int anum)
{
	anum++;
	return anum;
}

int main(void) {

	int num;
	num = func(10);
	std::cout << num << std::endl;

	//int& num2 = func(10);		// 오류 발생
								// 반환형이 기본자료형인 경우에 참조연산자에 값을 전달 할 수 없음
								// 반환값이 상수와 다름 없기 때문
	const int& res = func(num);	// const 참조자로 쓰면 가능 
	std::cout << res << std::endl;

	return 0;
}