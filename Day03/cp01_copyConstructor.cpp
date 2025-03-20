#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 복사 생성자 (copyConstructor) */
// 기존 객체를 복사해서 새로운 객체를 만들 때 호출되는 생성자
// 복사 생성자를 만들지 않았을 경우 컴파일러가 자동 생성
// 이 경우 단순 `메모리 주소`만 복사하는 얕은 복사 수행
// 동적 메모리 할당 시 문제 생길 위험성 있음
class Person {
	char m_name[20];
	int m_age;
public:
	Person(const char* pname, int age)
	{
		printf("Constructor Call!!\n");
		strcpy(m_name, pname);
		m_age = age;
	}
	void printPerson()
	{
		printf("name %s, age: %d\n", m_name, m_age);
	}
};

int main(void)
{
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);			// 복사 생성자 호출
	p2.printPerson();

	Person p3 = p;			// 복사 생성자 호출
	p3.printPerson();
	/* 출력결과 */
	// Constructor Call!!
	// name 홍길동, age: 30
	// name 홍길동, age : 30
	// name 홍길동, age : 30

	// 생성자 호출 p에서 한번만 호출됨
	// 복사 생성자는 원래 생성자를 호출하지 않는다
	// 새로운 객체를 만들면서 기존 객체를 그대로 `복사`할 뿐 
	// 생성자에서 수행하는 추가적인 초기화 작업은 하지 않는다.
	return 0;
}
