//#include <iostream>
//#include <vector>
//#include <list>		// ���� ����Ʈ ���
//using namespace std;
//
///* vector container - ����, ���� ���� */
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
//	/* ��� */
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << "/ ";
//	}
//	return 0;
//}
///*
// * iterator Ÿ��: iterator, begin(), end()
// */