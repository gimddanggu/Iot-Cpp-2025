#include <iostream>
// cin - �Է��� ����ϴ� ��ü

int main(void) {
	int inVal;

	std::cout << "�����Է�: ";
	std::cin >> inVal; // >> ���� ���� �ٸ�
	std::cout << "inVal: " << inVal << std::endl;

	// �� ���� ���� �Է¹޾� ����ϱ�
	int num1;
	int num2;
	std::cout << "�� ���� ������ �Է��ϼ��� >";
	std::cin >> num1 >> num2;
	std::cout << num1 << +", " << num2 << "�Է��ϼ̽��ϴ�." << std::endl;

	return 0;
}