#include <iostream>
using namespace std;
class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "�⺻ ������ ȣ��" << endl; }		// ����Ʈ ������
	CTime(int hour, int min, int sec) : m_hour(hour), m_min(min), m_sec(sec)	// �ݷ� �ʱ�ȭ, �̴ϼȶ����� ����Ʈ
																				// �Լ��� ��ü�κ� ���� ���� �ʱ�ȭ �� �� ����
	{										
		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
		/*m_hour = hour;
		m_min = min;
		m_sec = sec;*/

	}
	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("����ð��� %d:%d:%d �Դϴ�.\n\n", m_hour, m_min, m_sec);
	}
};
int main(void) {
	//CTime now;
	CTime now = CTime();	// �ӽ� ��ü ���� �� now�� ����
	now.showTime();
	CTime t(15, 30, 30);
	t.showTime();
	return 0;
}