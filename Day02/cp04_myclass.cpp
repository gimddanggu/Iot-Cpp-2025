#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 클래스 */
// 정의와 선언을 분리할 수 있음
class MyClass {
private:
	int m_id;
	char* m_name;
	int m_age;

public:
	MyClass(int id, const char* name, int age);
	~MyClass();
	void getData(void) const;

};
// 스코프
MyClass::MyClass(int id, const char* name, int age)
{
	m_id = id;
	m_name = new char[strlen(name) + 1];		// 동적할당
	//m_name = name			// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
	strcpy(m_name, name);

	m_age = age;
}
MyClass::~MyClass() { delete[] m_name; }

void MyClass::getData() const
{
	// 값의 변경을 허용하지 않음
	std::cout << "id: " << m_id << " name: " << m_name << " age: " << m_age << std::endl;
}
int main(void)
{
	MyClass obj(1, "김철수", 20);
	obj.getData();
	return 0;
}