#include <iostream>
using namespace std;
/* 클래스 템플릿*/

template <typename T>
class CTemplate {
private:
	T data;
public:
	CTemplate(T d) { data = d; }
	T getData() { return data; }
};
int main(void)
{
	CTemplate<int> obj(100);
	cout << "data: " << obj.getData() << endl;

	CTemplate<std::string> obj2("클래스 템플릿 테스트");
	cout << "data: " << obj2.getData() << endl;

	return 0;
}