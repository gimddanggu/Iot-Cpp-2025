#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	// ���ڿ� ó�� ��� ����
	// (1)
	char str[20] = "ȫ�浿";
	cout << str << endl;

	//(2)
	char str2[20];
	//str2 = "�迵��"
	strcpy(str2, "�迵��");
	cout << str2 << endl;

	//(3)
	char str3[20];
	cout << "�̸��Է� >> ";
	cin >> str3;
	cout << str3 << endl;

	//(4)
	const char* str4;
	str4 = "��ö��";
	cout << str4 << endl;

}