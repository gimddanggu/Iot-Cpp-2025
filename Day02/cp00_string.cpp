#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	// ¹®ÀÚ¿­ Ã³¸® ¹æ¹ý Á¤¸®
	// (1)
	char str[20] = "È«±æµ¿";
	cout << str << endl;

	//(2)
	char str2[20];
	//str2 = "±è¿µÈñ"
	strcpy(str2, "±è¿µÈñ");
	cout << str2 << endl;

	//(3)
	char str3[20];
	cout << "ÀÌ¸§ÀÔ·Â >> ";
	cin >> str3;
	cout << str3 << endl;

	//(4)
	const char* str4;
	str4 = "±èÃ¶¼ö";
	cout << str4 << endl;

}