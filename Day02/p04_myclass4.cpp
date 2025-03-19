#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 실습4 - 소멸자를 이용해서 메모리 반환 */
class MyClass {
private:
	int m_id;
	char* m_name;
	int m_age;

public:
	MyClass(int id, const char* name, int age)
	{
		m_id = id;
		m_name = new char[strlen(name) + 1];		// 동적할당
		//m_name = name			// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
		strcpy(m_name, name);

		m_age = age;
	}
	~MyClass() {		// 소멸자 (자동 호출)
						// 동적할당 경우 말고는 별도로 작성할 필요 없음
		delete[] m_name;
	}

	void getData()
	{
		std::cout << "id: " << m_id << " name: " << m_name << " age: " << m_age << std::endl;
	}

};

int main(void)
{
	MyClass obj(1, "김철수", 20);
	obj.getData();
	return 0;
}