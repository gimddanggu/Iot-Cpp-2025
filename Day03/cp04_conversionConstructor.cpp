#include <iostream>
/* 변환 생성자 - 특정 타입의 값을 객체로 변환할 때 호출되는 생성자 */
// 특정 타입의 값을 객체로 변환할 때 호출되는 생성자
// 입력을 한개만 가짐

class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		printf("변환 생성자 호출");
		this->value = value;
	}

	void printMyClass()
	{
		printf("value: %d\n", value);
	}
};
int main(void)
{
	MyClass obj = 10;		// 변환 생성자
	obj.printMyClass();
	MyClass obj2(20);
	obj2.printMyClass();
	return 0;
}