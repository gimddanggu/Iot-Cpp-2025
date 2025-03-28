//#include <iostream>
//#include <vector>
//#include <list>		// 연결 리스트 기반
//using namespace std;
//
///* vector container - 삽입, 삭제 참조 */
//int main(void)
//{
//	vector<string> v;
//	v.push_back("tiger");
//	v.push_back("lion");
//	v.push_back("elephant");
//	v.push_back("horse");
//
//	cout << "v.front(): " << v.front() << endl;
//	cout << "v.back(): " << v.back() << endl;
//	cout << "v.capacity(): " << v.capacity() << endl;
//
//	vector<string>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << "/ ";
//	}
//
//	v.pop_back();
//	for (iter = v.begin(); iter != v.end(); iter++) 
//	{
//		cout << *iter << "/ ";
//	}
//
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		if (*iter == "elephant")
//		{
//			v.erase(iter); break;
//		}
//		cout << endl;
//	}
//	/* 출력 */
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << "/ ";
//	}
//	return 0;
//}
///*
// * iterator 타입: iterator, begin(), end()
// */