#include <iostream>
/* 단항 연산자 오버로딩 : 반환형 operator[연산자]() */
class Money
{
private:
    int money;
public:
    Money(int m = 0) : money(m) { }
    int operator()() 
    {
        return money;
    }
    void operator()(int m)
    {
        money += m;
    }
}
int main(void) 
{
    Money m;
    pritnf("money: %d\n", m.operator()())
    m(1000)
    printf("money: %d\n", m.operator()());
    return 0;
}