#include <iostream>
using namespace std;
class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }		// 디폴트 생성자
	CTime(int hour, int min, int sec) : m_hour(hour), m_min(min), m_sec(sec)	// 콜론 초기화, 이니셜라이져 리스트
																				// 함수의 몸체부분 보다 먼저 초기화 할 수 있음
	{										
		cout << "입력 3개 받는 생성자 호출" << endl;
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
		printf("현재시간은 %d:%d:%d 입니다.\n\n", m_hour, m_min, m_sec);
	}
};
int main(void) {
	//CTime now;
	CTime now = CTime();	// 임시 객체 생성 후 now에 대입
	now.showTime();
	CTime t(15, 30, 30);
	t.showTime();
	return 0;
}