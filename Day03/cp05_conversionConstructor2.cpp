#include <iostream>
/* 변환 생성자 */ 
// 기본 데이터 타입 → 클래스 객체 변환

class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time(){}	// 디폴트 생성자
	Time(int abssec) 
	{
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void printTime()
	{
		printf("현재시간은 %d시 %d분 %d초 입니다. \n", hour, min, sec);
	}
};

int main(void)
{
	Time now = 9999;
	// Time now(9999)와 동일
	now.printTime();
}