/* cpp style 구조체 */
#include <iostream>
class Human {	
public:		// 외부에서도 클래스에 접근할 수 있도록
	char name[20];
	int age;
	char job[10];

	Human() {		// 디폴트 생성자

	}

	void showHuman()
	{
		printf("name: %s, age: %d, job: %s", name, age, job);
	}

};


int main()
{
	Human h = { "김철수", 30, "백수" };
	h.showHuman();

	return 0;
}