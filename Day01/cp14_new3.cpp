#include <iostream>
using namespace std;
/*
	new는 생성자 호출이 되므로 초기화 가능
	생성자 - 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드이다.
*/
int main()
{
	int* parr;
	parr = new int[3] {10, 20, 30};	// 이름없는 배열객체 생성하고 10, 20, 30 으로 초기화한다.
	cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;

}