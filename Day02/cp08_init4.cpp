#include <iostream>
/* Ŭ���� - ��� �ʱ�ȭ */
// �ݷ�(:) �ʱ�ȭ �ؾ� �ϴ� ���
// 1) ��� ��� ����
// 2) ������ ��� ����
// 3) ��ü ��� ����
class ConstClass {
private:
	int m_value1;
	const int m_value2;		// ��� ��� ������ ��ü ���� �� �� �ݵ�� �ʱ�ȭ�� �Ǿ�� ��
public:
	//ConstClass(int value1, int value2) { m_value1 = value1; m_value2 = value2; }		// ����� ����� ���ÿ� �ʱ�ȭ����� ��
	ConstClass(int value1, int value2) : m_value2(value2) { m_value1 = value1; }
	void showValue() 
	{
		printf("m_value1: %d\n", m_value1);
		printf("m_value2: %d\n", m_value2);

	}
};
class RefClass {
private:
	int& ref;		// ������ ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷������ �Ѵ�.
public:
	RefClass(int& r) : ref(r) { }
	void showValue() {
		printf("ref: %d\n", ref);
	}
};

class Position {
private:
	int m_x;
	int m_y;
public:
	Position(int x, int y) { 
		std::cout << "Position constructor" << std::endl;
		m_x = x, m_y = y; 
	}
	void getData() {
		printf("m_x: %d\n", m_x);
		printf("m_y: %d\n", m_y);
	}
};

class ObjClass {
private:
	Position pos;		// ��ü �������
public:
	ObjClass(int x, int y) : pos(x, y) { std::cout << "ObjClass constructor!!" << std::endl; }
	void showValue() {
		pos.getData();


	}
};
int main(void)
{
	//(1)
	ConstClass obj(10, 20);
	obj.showValue();

	//(2)
	int n = 50;
	RefClass obj2(n);
	obj2.showValue();
	
	//(3)
	ObjClass obj3(3, 6);
	obj3.showValue();
	return 0;
}