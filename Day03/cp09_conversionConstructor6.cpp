#include <iostream>
/* 변환 생성자 */
// explicit 키워드로 자동변환막기

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {	// explicit 묵시적 변환 막음
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
	// MyClass obj = 10;		// 변환 생성자 호출 - 객체의 변환이 일어남
	// obj.printMyClass();			

	// explicit 키워드로 인해 변환 생성자 호출 x 
	// 일반 생성자로만 사용할 수 있다.

	MyClass obj2(20);
	obj2.printMyClass();
	return 0;
}