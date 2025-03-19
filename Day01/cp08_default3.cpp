#include <iostream>
using namespace std;
// default 함수  유의할 점
int func(int n = 0) 
{
	return n * n;
}
int func()
{
	return 10;
}
int main(void)
{
	cout << func(10) << endl;
	//cout << func() << endl;		// 오류발생
	// 함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때
	// 입력없는 함수 호출시 문제가 발생한다.
	return 0;
}