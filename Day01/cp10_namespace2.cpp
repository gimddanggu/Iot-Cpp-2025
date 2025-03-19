#include <iostream>


namespace Acom
{
    void SimpleFunc(void);
}

namespace Acom
{
    void PrettyFunc(void);
}
// 선언된 이름공간의 이름이 동일하다면, 동일한 이름공간으로 간주
namespace Bcom
{
    void SimpleFunc(void);  
}
namespace Bcom
{
    void SimpleFunc(void)
    {
        std::cout << "Bcom이 정의한 함수" << std::endl;
    }
}
void Acom::PrettyFunc(void)
{
    std::cout << "pretty!!" << std::endl;
}

void Acom::SimpleFunc(void)
{
    std::cout << "Acom이 정의한 함수" << std::endl;
    PrettyFunc();        // 동일한 이름공간(Acom)
    Bcom::SimpleFunc();  // 다른 이름공간(Bcom)
}


int main(void)
{
    Acom::SimpleFunc();
    return 0;
}