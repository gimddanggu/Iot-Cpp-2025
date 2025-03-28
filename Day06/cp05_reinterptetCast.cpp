/* reinterptet_cast 
 * ������ -> ������, ������ -> ����, ���� -> �����ͷ��ϴ� �ַ� ������ ���� ������ 
 */

#include <iostream>

int main(void)
{
	int* ip = new int{ 10 };
	long lg  = reinterpret_cast<long>(ip);				// int* --> long
	unsigned int ui = reinterpret_cast<int>(ip);		// int* --> uint
	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui);

	int* p0 = reinterpret_cast<int*>(lg);				// long --> int*
	int* p1 = reinterpret_cast<int*>(ui);
	printf("p: %d, p1: %d\n", *p0, *p1); // �� �ȵǴ��� Ȯ���غ��� --> 32 ��Ʈ�� �ٲٸ� ����� 

	int* p = new int{ 100 };
	char* pc = reinterpret_cast<char*>(p);				// int* --> char
	printf("c: %c", *pc);

	int* p2 = reinterpret_cast<int*>(pc);				// char --> int*
	printf("p: %d", *p2);
	delete ip;
}