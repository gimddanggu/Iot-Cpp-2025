/* staticTest ��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
 * 3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� �����ϵ��� ��ų ���̱� ���� 
 * ��´���� showMember() �޼��带 �����Ͻÿ�.
 * 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class StaticTest
{
private:
	static int cnt;
	char* name;
	char* ph;
	char* addr;
public:
	StaticTest(const char* name, const char* ph, const char* addr)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ph = new char[strlen(ph) + 1];
		strcpy(this->ph, ph);
		this->addr = new char[strlen(addr) + 1];
		strcpy(this->addr, addr);

	}
	void showMember()
	{	
		StaticTest::cnt++;
		std::cout << "ȸ����ȣ: " << cnt << std::endl;
		printf("�̸�: %s, ��ȣ: %s, �ּ� %s\n", this->name, this->ph, this->addr);
	}
	~StaticTest() { delete[] name; delete[] ph; delete[] addr;}
};
int StaticTest::cnt = 0;


int main(void)
{
	StaticTest m1("ȫ�浿", "010-1111-1222", "�λ�");
	m1.showMember();

	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
	m2.showMember();

	StaticTest m3("��ö��", "010-3333-3333", "���");
	m3.showMember();
	return 0;
}

