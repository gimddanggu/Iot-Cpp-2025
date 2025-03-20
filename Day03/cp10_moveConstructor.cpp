#include <iostream>
/* 이동생성자 */

int main(void)
{
	int n = 10;
	int& rn = n;		// 레퍼런스, 일반참조, l-value 참조
	const int& ra = 10;

	int&& rrn = 10;		// r-value 참조

	std::cout << n << ", " << rn << ", " << ra << ", " << rrn << std::endl;

	return 0;
}