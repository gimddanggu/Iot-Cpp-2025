#include <iostream>
/* ��ȯ ������ */
// Ŭ���� Ÿ���� �ٸ� Ŭ������ ��ȯ

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

    // Celsius �� Fahrenheit ��ȯ ������
    Fahrenheit(const Celsius& c) {
        temp = (c.getTemp() * 9 / 5) + 32;
        std::cout << "���� �� ȭ�� ��ȯ!\n";
    }

    void printTemp() {
        std::cout << "ȭ�� �µ�: " << temp << "��F\n";
    }
};

int main() {
    Celsius c(25);      // ���� 25��
    Fahrenheit f = c;   // ��ȯ ������ ȣ�� (Celsius �� Fahrenheit ��ȯ)
    f.printTemp();      // "ȭ�� �µ�: 77��F"
}
