#include <iostream>
/* ����Ʈ �Ű����� */

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
	
	res = func();	// �Ű������� �⺻���� 0�� ��
	std::cout << res << std::endl;
	return 0;
}