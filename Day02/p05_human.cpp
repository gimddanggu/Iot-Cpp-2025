#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/* �̸��� ��ȭ��ȣ�� ���� �Ҵ��� �ް� human class �� �ϼ� ��Ű�ÿ�. */
class Human {
private:
	char* pname{nullptr};
	int age{0};
	char* ptel{ nullptr };
public:
	Human() {}	// ����Ʈ ������
	Human(const char* _pname, int _age, const char* _ptel)
	{

		pname = new char[strlen(_pname) + 1];
		strcpy(pname, _pname);

		age = _age;

		ptel = new char[strlen(_ptel) + 1];
		strcpy(ptel, _ptel);

	}
	~Human() { delete[] pname; delete[] ptel; }
	void getData() 
	{
		std::cout << "�̸�: " << pname << "\n����: " << age << "\n��ȣ: " << ptel << std::endl;
	}
};
int main(void)
{
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();
	return 0;
}