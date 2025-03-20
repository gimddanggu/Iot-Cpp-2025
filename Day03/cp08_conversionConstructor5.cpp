#include <iostream>
/* 변환 생성자 */
// 연산자 오버로딩과 함께 사용

class Time {
    int hour, min, sec;
public:
    Time(int abssec) {
        hour = abssec / 3600;
        min = (abssec / 60) % 60;
        sec = abssec % 60;
    }

    // 연산자 오버로딩 (int 값을 더하면 자동 변환)
    // 통용적으로 연산자 오버로딩은 operator연산자 이름으로 정의함
    // 오버로딩으로 인해 객체끼리 + 연산이 가능해짐
    Time operator+(int extra) {
        return Time(hour * 3600 + min * 60 + sec + extra);
    }

    void printTime() {
        std::cout << "현재 시간: " << hour << "시 " << min << "분 " << sec << "초\n";
    }
};

int main() {
    Time now = 3600;  // 변환 생성자 호출
    now = now + 120;  // int 값을 더해도 자동 변환
    now.printTime();  // "현재 시간: 1시 2분 0초"
}
