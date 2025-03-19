#include <stdio.h>

namespace aName {
	void func()
	{
		printf("aName::func\n");
	}
}
namespace bName {
	void func()
	{
		printf("bName::func()\n");
	}
}
namespace cName {
	void func()
	{
		printf("cName::func()\n");
	}
}
// 존재하는 namespace가 다르면 동일한 이름의 함수 및 변수 선언 가능
// :: 범위지정 연산자
namespace dName	// 선언과 정의를 분리할 수 있음
{
	void func(void);
}
void dName::func()
{
	printf("dName::func()\n");
}

using namespace cName;		// cName::func() 를 func()로 사용할 수 있음


int main()
{
	aName::func();		// namespace aName에 정의된 func 함수 호출
	bName::func();		// namespace bName에 정의된 func 함수 호출
	func();
	return 0;
}