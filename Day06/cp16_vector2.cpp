#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	cout << "[ v[i], v.size(), v.capcity() ]" << endl;
	/*for (int i = 0; i <= 32; i++)
	{
		v.push_back(i + 1);
		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << endl;
	}*/

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(11);
	v2.push_back(12);
	v2.push_back(13);
	v2.insert(v2.begin(), 1);
	v2.insert(find(v2.begin(), v2.end(), 13), 20);
	//v2.insert(v2.begin(), { 1, 2, 4 });

	for (auto i : v2)
	{
		cout << i << endl;
	}
	cout<<endl;

	
	v2.pop_back();		// ������ ���� ���� 
	for (auto i : v2)
	{
		cout << i << endl;
	}
	
	return 0;
}

/* v.push_pack(10): ������ ���� �ڿ� 10�� �߰��Ѵ�. 
 * v.insert(index, val) : idx��° ��ġ�� val�� �ִ´�.
 * v.capacity() : ���Ϳ� �Ҵ�� �޸� ũ�⸦ �����Ѵ�. */