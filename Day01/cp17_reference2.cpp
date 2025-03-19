// 다른 함수에 선언된 지역변수의 값을 바꾸는 방법
// 레퍼런스 - 또 다른 이름, 보이지 않는 포인터

#include <iostream>
using namespace std;
/* reference 
* 변수에 별명을 부여한다.
* 또 다른 이름, 보이지 않는 포인터
* 
*/
void chFunc(int&);

int main(void)
{
	int n = 10;
	cout << "호출 전 n: " << n << endl;

	chFunc(n);
	cout << "호출 후 n: " << n << endl;
	return 0;
}
// 매개변수로 참조변수를 받음
void chFunc(int& rn)			// 레퍼런스(참조변수)선언
								// 레퍼런스는 선언만 안되는데?
								// -> 매개변수의 선언과 초기화는 함수의 호출과 함께 동시에 진행된다.
{
	rn = 20;
}