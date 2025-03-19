#include <iostream>
/* reference 함수 - 잘못된 참조의 반환 */

int& RefFunc(int n)
{
	int num = 20;
	num += n;
	return num;
}

int main(void)
{
	int& ref = RefFunc(10);
	// 함수 호출 결과
	// 지역변수 num에  ref 라는 또 다른 이름이 붙게 됨
	// num은 `지역변수`이므로 함수 호출 이후 메모리에서 사라짐
	// ref가 사라진 메모리를 접근하려고 하기 때문에 Undefined Behavior(UB) 발생.
	// 컴파일러는 경고를 띄워주지만, 에러 발생되지 않는다.
	// 지역 변수를 참조로 반환하면 절대 안 됨!!!!!!!!
	return 0;
}