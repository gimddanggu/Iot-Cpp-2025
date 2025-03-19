/* cpp style 구조체 */
#include <iostream>
struct Human {		// c++ 에서는 typedef 없어도 Human 이라고 쓸 수 있음
	char name[20];
	int age;
	char job[10];

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