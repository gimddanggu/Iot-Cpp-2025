#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/* 이동생성자 */
// r-value reference 를 파라미터로 갖는 이동 생성자

class Human {
private:
	char name[10];
	int age;
public:
	// 입력2개 받는 생성자
	Human(const char* name, int age) 
	{
		printf("입력2개 생성자 호출\n");
		strcpy(this->name, name);
		this->age = age;
	}

	// 복사 생성자
	Human(const Human& copy)
	{
		printf("복사 생성자 호출\n");
		strcpy(this->name, copy.name);
		this->age = copy.age;
	}
	// 이동생성자
	Human(Human&& move) noexcept
	{
		printf("이동 생성자 호출\n");
		strcpy(this->name, move.name);
		this->age = move.age;

		// move.name = nullptr;
		// move.age = 0;
	}
	void printHuman() 
	{
		printf("name: %s, age: %d\n", this->name, this->age);
	}
};

int main()
{
	Human h1{"홍길동", 100 };
	h1.printHuman();

	Human h2(h1);
	h2.printHuman();
	
	Human h3(std::move(h1));
	h3.printHuman();
	return 0;
}