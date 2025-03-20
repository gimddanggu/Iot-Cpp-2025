#include <iostream>
/* 변환 생성자 */
// 클래스 타입을 다른 클래스로 변환

class Celsius {
    double temp;
public:
    Celsius(double t) : temp(t) {}

    double getTemp() const { return temp; }
};

class Fahrenheit {
    double temp;
public:
    Fahrenheit(double t) : temp(t) {}

    // Celsius → Fahrenheit 변환 생성자
    Fahrenheit(const Celsius& c) {
        temp = (c.getTemp() * 9 / 5) + 32;
        std::cout << "섭씨 → 화씨 변환!\n";
    }

    void printTemp() {
        std::cout << "화씨 온도: " << temp << "°F\n";
    }
};

int main() {
    Celsius c(25);      // 섭씨 25도
    Fahrenheit f = c;   // 변환 생성자 호출 (Celsius → Fahrenheit 변환)
    f.printTemp();      // "화씨 온도: 77°F"
}
