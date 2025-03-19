#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/* 이름과 전화번호는 동적 할당을 받고 human class 를 완성 시키시오. */
class Human {
private:
	char* pname{nullptr};
	int age{0};
	char* ptel{ nullptr };
public:
	Human() {}	// 디폴트 생성자
	Human(const char* _pname, int _age, const char* _ptel)
	{

		pname = new char[strlen(_pname) + 1];
		strcpy(pname, _pname);

		age = _age;

		ptel = new char[strlen(_ptel) + 1];
		strcpy(ptel, _ptel);

	}
	~Human() { delete[] pname; delete[] ptel; }
	void getData() 
	{
		std::cout << "이름: " << pname << "\n나이: " << age << "\n번호: " << ptel << std::endl;
	}
};
int main(void)
{
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();
	return 0;
}