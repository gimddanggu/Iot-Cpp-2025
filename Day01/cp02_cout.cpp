#include <iostream>
using namespace std; // std::cout ��� cout�� �ᵵ ��

int main(void)
{
	int num = 100;
	char str[100] = "ȫ�浿";
	double d = 3.14;
	// ���Ĺ���, �ڷ��� ���� �������� �ʾƵ� �˾Ƽ� �������
	std::cout << "abcdefg" << std::endl;
	std::cout << num << std::endl;
	std::cout << str << std::endl;
	std::cout << d << std::endl;

	// �� ���� ���
	std::cout <<"���ڿ� ���: "<< num << ' ' << str << ' ' << d << std::endl;

	return 0;
}