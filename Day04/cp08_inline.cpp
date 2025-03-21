#include <iostream>
/* ¸ÞÅ©·Î */
#define ADD(a, b)	#a "+" #b
#define PI			3.14
#define MSG(x, y, z)	x ## y ## z
int main()
{
	printf("ADD(a, b): %s\n", ADD(10, 20));
	printf("MSG(x, y, z): %s\n", MSG("macro+", "operator+", "test"));
	return 0;
}