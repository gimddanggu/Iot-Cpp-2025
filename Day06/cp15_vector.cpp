/*vector*/
#include <iostream>
#include <vector>		// vector ������� ����
using namespace std;
int main()
{
	vector<int> v;
	vector<int> v1{ 10 };	// ��Ұ� 10�� ����
	vector<int> v2(10);		// ũ�Ⱑ 10�� ����
	vector<int> v3 = { 1, 2, 3, 4 , 5 };

	cout << "v size: " << v.size() << endl;
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	cout << "v3 size: " << v3.size() << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("v2[%d]: %d", i, v2[i]);
	}
	// �ʱ�ȭ ���� ������ 0���� �ʱ�ȭ��

	cout << endl;
	for (auto i : v3)			// ������� for�� - �ε��� ����� �Ұ�
	{
		//cout << v3[i] << endl;		
		cout << i << endl;		// 0���� �����ϴ°� �ƴ�
	}
	/* begin() �� end()�� iterater Ÿ�� ��ȯ�Ѵ�. (����Ʈ)*/
	cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << endl;
	cout << "v3�� ������ ��Ұ�: " << *(v3.end() - 1) << endl;		// end: ������ ��� ���� �� ��ȯ

	return 0;
}

/*
vector.size(): ���� ũ��(����) ��ȯ
vector.begin(): ù��° �ּ� ��ȯ
vector.end(): ������ �ּ��� ���� �ּ� ��ȯ */