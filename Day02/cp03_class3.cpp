#include <iostream>
/* 생성자 */
// 생성자 호출로 객체가 만들어 진다.
// 객체 생성 시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
// 생성자는 초기화기능에 사용한다.
// 생성자는 오버로딩이 가능하다 (함수니깐!!)
// 프로그래머가 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않는다. 

class MyClass {
private:
	int m_num1;
	int m_num2;

public:
	MyClass() = default;
	MyClass(int num1)
	{
		m_num1 = num1;
	}
	MyClass(int num1, int num2)
	{
		m_num1 = num1;
		m_num2 = num2;

	}
	~MyClass() {}				// 소멸자
	void printData()
	{
		std::cout << "나는 MyClass의 인스턴스 입니다." << std::endl;
		std::cout << "m_num1: " << m_num1 << ", m_num2: " << m_num2 << std::endl;
	}

};
int main(void)
{
	MyClass obj;				// 디폴트 생성자 제공받음
								// 다른 생성자 만들었을 때에는 기본 생성자 만들어야 함
	MyClass obj2(100, 200);	// 생성자 만들어야 함
	obj2.printData();
	return 0;
}