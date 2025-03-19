#include <iostream>
/* 디폴트 매개변수 */

//int func(int num) {
//	return num + 10;
//}

int func(int num = 0) {
	return num + 10;
}
int main(void)
{	
	int res;
	res = func(10);
	std::cout << res << std::endl;
	
	res = func();	// 매개변수에 기본값인 0이 들어감
	std::cout << res << std::endl;
	return 0;
}