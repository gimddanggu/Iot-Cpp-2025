/* cpp style ����ü */
#include <iostream>
struct Human {		// c++ ������ typedef ��� Human �̶�� �� �� ����
	char name[20];
	int age;
	char job[10];

	void showHuman()
	{
		printf("name: %s, age: %d, job: %s", name, age, job);
	}

};


int main()
{	
	Human h = { "��ö��", 30, "���" };
	h.showHuman();

	return 0;
}