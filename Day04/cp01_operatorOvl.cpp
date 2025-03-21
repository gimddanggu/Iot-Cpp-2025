#include <iostream>
/* 연산자 오버로딩 */
class MyClass
{
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) {}
	void showMyClass() 
	{
		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
	}
};

int main(void)
{
	MyClass obj1{ 1, 2, "홍길동" };
	obj1.showMyClass();

	MyClass obj2;
	obj2 = obj1;					// 연산자 오버로딩(=)
	obj2.showMyClass();
	// Q4-1. 이게 왜 연산자 오버로딩의 예시인가?
	// 복사 생성자를 배울 때 obj1 = obj 이런 식을 썼던 거 같은데


	// ----- 다음 배울 것
	//MyClass obj3{ 10, 20 };
	//MyClass obj4{ 30, 40 };
	//MyClass obj4 = obj1 + obj2;		// 연산자 오버로딩(+) 필요


	return 0;
}