#include <iostream>
using namespace std;
/* Ŭ���� ���ø�*/

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

	CTemplate<std::string> obj2("Ŭ���� ���ø� �׽�Ʈ");
	cout << "data: " << obj2.getData() << endl;

	return 0;
}