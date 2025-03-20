#include <iostream>
/* 변환 생성자 */
// 매개변수로 전달될 때 자동 변환

class Person {
    int age;
public:
    Person(int a) {
        age = a;
        std::cout << "변환 생성자 호출!\n";
    }

    void show() {
        std::cout << "나이: " << age << '\n';
    }
};


// 인자로 Person 타입을 받는 함수 (전역 함수)
void printPerson(Person p) {
    std::cout << "printPerson 함수 호출!\n";
    p.show();
}

int main() {
    printPerson(30);    // int → Person 변환 생성자 자동 호출
                        // Q2. printPerson('30')처럼 자료형이 달라도 변환되어 호출이 될까?
}
