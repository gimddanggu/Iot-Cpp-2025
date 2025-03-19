#include <iostream>
using namespace std;
/*  메모리 동적 할당 : new - delete 
	자료형 포인터 = new 자료형(크기)
	new는 생성자를 호출한다. 즉 new는 객체를 생성시킨다.
	객체를 생성하기 위해서는 생성자 호출이 있어야 한다.
*/

int main(void)
{
	int size;
	int* pary;
	
	//int *pn = new int;			// 힙 영역에 int형 변수 동적 할당 malloc
	//delete pn						// 할당된 메모리 공간 반환 free

	cout << "크기 >> ";
	cin >> size;

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	cout << pary[0] << ", " << pary[1] << ", " << pary[2];

	delete[] pary;				// int형 배열의 소멸
	
	return 0;
}