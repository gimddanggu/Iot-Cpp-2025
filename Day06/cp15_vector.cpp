/*vector*/
#include <iostream>
#include <vector>		// vector 헤더파일 포함
using namespace std;
int main()
{
	vector<int> v;
	vector<int> v1{ 10 };	// 요소가 10인 백터
	vector<int> v2(10);		// 크기가 10인 백터
	vector<int> v3 = { 1, 2, 3, 4 , 5 };

	cout << "v size: " << v.size() << endl;
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	cout << "v3 size: " << v3.size() << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("v2[%d]: %d", i, v2[i]);
	}
	// 초기화 하지 않으면 0으로 초기화됨

	cout << endl;
	for (auto i : v3)			// 범위기반 for문 - 인덱스 사용이 불가
	{
		//cout << v3[i] << endl;		
		cout << i << endl;		// 0부터 시작하는게 아님
	}
	/* begin() 과 end()는 iterater 타입 반환한다. (포인트)*/
	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl;
	cout << "v3의 마지막 요소값: " << *(v3.end() - 1) << endl;		// end: 마지막 요소 다음 값 반환

	return 0;
}

/*
vector.size(): 원소 크기(갯수) 반환
vector.begin(): 첫번째 주소 반환
vector.end(): 마지막 주소의 다음 주소 반환 */