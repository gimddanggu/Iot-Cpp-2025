#include <iostream>
using namespace std;
/* 템플릿 */
// 템플릿은 선언과 함수정의가 분리될 수 없다.
template <typename T>			// 템플릿 선언(일반화)
T func(T a, T b) {				// 템플릿 함수
	cout << "T" << endl;
	return a + b;
}
// 템플릿 특수화 - 템플릿 일반화중 특정한 자료형을 처리할 경우 사용 
template <>
int func<int>(int a, int b) {
	cout << "type: <int>"  << endl;
	return a + b;
}

int main(void)
{
	cout << func(10, 20) << endl;
	cout << func(10.5, 20.5) << endl;

	return 0;
}