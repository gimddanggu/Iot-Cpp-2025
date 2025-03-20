#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* ���� ������ (copyConstructor) */
// ���� ��ü�� �����ؼ� ���ο� ��ü�� ���� �� ȣ��Ǵ� ������
// ���� �����ڸ� ������ �ʾ��� ��� �����Ϸ��� �ڵ� ����
// �� ��� �ܼ� `�޸� �ּ�`�� �����ϴ� ���� ���� ����
// ���� �޸� �Ҵ� �� ���� ���� ���輺 ����
class Person {
	char m_name[20];
	int m_age;
public:
	Person(const char* pname, int age)
	{
		printf("Constructor Call!!\n");
		strcpy(m_name, pname);
		m_age = age;
	}
	void printPerson()
	{
		printf("name %s, age: %d\n", m_name, m_age);
	}
};

int main(void)
{
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);			// ���� ������ ȣ��
	p2.printPerson();

	Person p3 = p;			// ���� ������ ȣ��
	p3.printPerson();
	/* ��°�� */
	// Constructor Call!!
	// name ȫ�浿, age: 30
	// name ȫ�浿, age : 30
	// name ȫ�浿, age : 30

	// ������ ȣ�� p���� �ѹ��� ȣ���
	// ���� �����ڴ� ���� �����ڸ� ȣ������ �ʴ´�
	// ���ο� ��ü�� ����鼭 ���� ��ü�� �״�� `����`�� �� 
	// �����ڿ��� �����ϴ� �߰����� �ʱ�ȭ �۾��� ���� �ʴ´�.
	return 0;
}
