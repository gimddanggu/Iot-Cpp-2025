#include <iostream>
/* ��ȯ ������ */
// �Ű������� ���޵� �� �ڵ� ��ȯ

class Person {
    int age;
public:
    Person(int a) {
        age = a;
        std::cout << "��ȯ ������ ȣ��!\n";
    }

    void show() {
        std::cout << "����: " << age << '\n';
    }
};


// ���ڷ� Person Ÿ���� �޴� �Լ� (���� �Լ�)
void printPerson(Person p) {
    std::cout << "printPerson �Լ� ȣ��!\n";
    p.show();
}

int main() {
    printPerson(30);    // int �� Person ��ȯ ������ �ڵ� ȣ��
                        // Q2. printPerson('30')ó�� �ڷ����� �޶� ��ȯ�Ǿ� ȣ���� �ɱ�?
}
