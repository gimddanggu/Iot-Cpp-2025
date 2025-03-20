/* staticTest 라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
 * 3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가하도록 시킬 것이기 때문 
 * 출력담당의 showMember() 메서드를 구현하시오.
 * 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class StaticTest
{
private:
	static int cnt;
	char* name;
	char* ph;
	char* addr;
public:
	StaticTest(const char* name, const char* ph, const char* addr)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ph = new char[strlen(ph) + 1];
		strcpy(this->ph, ph);
		this->addr = new char[strlen(addr) + 1];
		strcpy(this->addr, addr);

	}
	void showMember()
	{	
		StaticTest::cnt++;
		std::cout << "회원번호: " << cnt << std::endl;
		printf("이름: %s, 번호: %s, 주소 %s\n", this->name, this->ph, this->addr);
	}
	~StaticTest() { delete[] name; delete[] ph; delete[] addr;}
};
int StaticTest::cnt = 0;


int main(void)
{
	StaticTest m1("홍길동", "010-1111-1222", "부산");
	m1.showMember();

	StaticTest m2("김영희", "010-2222-2222", "부산");
	m2.showMember();

	StaticTest m3("김철수", "010-3333-3333", "울산");
	m3.showMember();
	return 0;
}

