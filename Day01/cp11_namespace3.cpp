#include <iostream>

namespace AAA
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        }
    }
}
namespace ABC = AAA::BBB::CCC;

// 전역변수 선언
int val = 100;

int main(void)
{   
    int val = 90;
    ABC::num1 = 10;
    ABC::num2 = 20;
    ::val++;    // 범위지정연산자는 지역변수가 아닌 전역변수의 접근에도 사용가능

    std::cout << ABC::num1 << ", " << ABC::num2 << std::endl;
    std::cout << "지역변수 val: " << val << std::endl;
    std::cout << "전역변수 val: " << ::val << std::endl;

    return 0;
}