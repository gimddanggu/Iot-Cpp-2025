#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 클래스를 만들고 setter, getter 을 이용해 private 변수 접근 */
class MyClass {
private:
	int m_id;
	char m_name[20];
	int m_age;

public:
	void setData(int id, const char* name, int age)
	{
		m_id = id;
		strcpy(m_name, name);		// 문자열 초기화 방법 까먹지 않기(주의)
		m_age = age;
	}

	void getData()
	{
		std::cout << "id: " << m_id << " name: " << m_name << " age: "<< m_age << std::endl;
	}

};

int main(void)
{
	MyClass obj;
	obj.setData(1, "김철수", 20);
	obj.getData();
	return 0;
}