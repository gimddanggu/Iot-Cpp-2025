///* vector container ��� */
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	printf("%d\n", v[2]);
//
//	/* ���1 */
//	for (auto i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;
//	}
//	cout << endl << endl;
//	/* ���2 */
//	for (vector<int>::size_type i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//
//	cout << endl << endl;
//
//	/* ���3 */
//	vector<int>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++)
//	{
//		cout << *iter << endl;
//	}
//	/* ���4 */
//	// ������..
//
//}