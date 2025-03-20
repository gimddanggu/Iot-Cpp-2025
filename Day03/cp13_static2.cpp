#include <iostream>
class AAA {
private:
	static int static_a;		// static 멤버 변수
	int n;
public:
	AAA(int n);
	static void setStatic_a(int a);		// static 멤버 함수
	void print();
};
int AAA::static_a = 100;
AAA::AAA(int n) {
	this->n = n;
}

void AAA::print()
{
	printf("static_a: %d, n: %d\n", static_a, n);
}
void AAA::setStatic_a(int a) {
	static_a = a;	// static 멤버 함수는 static 멤버만 접근 가능
	// n = 0;		// 일반 멤버의 접근은 허용되지 않음
}

int main(void)
{
	AAA obj1(10), obj2(20);
	obj1.print();
	obj2.print();

	obj1.setStatic_a(50);
	obj1.print();
	obj2.print();


}