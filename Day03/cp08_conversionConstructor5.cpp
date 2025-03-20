#include <iostream>
/* ��ȯ ������ */
// ������ �����ε��� �Բ� ���

class Time {
    int hour, min, sec;
public:
    Time(int abssec) {
        hour = abssec / 3600;
        min = (abssec / 60) % 60;
        sec = abssec % 60;
    }

    // ������ �����ε� (int ���� ���ϸ� �ڵ� ��ȯ)
    // ��������� ������ �����ε��� operator������ �̸����� ������
    // �����ε����� ���� ��ü���� + ������ ��������
    Time operator+(int extra) {
        return Time(hour * 3600 + min * 60 + sec + extra);
    }

    void printTime() {
        std::cout << "���� �ð�: " << hour << "�� " << min << "�� " << sec << "��\n";
    }
};

int main() {
    Time now = 3600;  // ��ȯ ������ ȣ��
    now = now + 120;  // int ���� ���ص� �ڵ� ��ȯ
    now.printTime();  // "���� �ð�: 1�� 2�� 0��"
}
