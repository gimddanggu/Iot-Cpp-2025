//#include <iostream>
//using namespace std;
//class MyClass
//{
//private:
//	int num;
//public:
//	MyClass(int n) : num(n)
//	{
//		cout << num << " constructor" << endl;
//	}
//	~MyClass()
//	{
//		cout << num << " destructor" << endl;
//	}
//	void SetData(int n) 
//	{ 
//		num = n; 
//	}
//};
//int main(void)
//{
//	//MyClass* ptr = &MyClass{ 10 };
//	//MyClass& obj2  = MyClass{ 20 };		// �ӽð�ü�� ������ ����� �� ����.
//	MyClass obj = MyClass{ 10 };
//	obj.SetData(20);
//
//	MyClass&& obj2 = MyClass{ 20 };
//	obj2.SetData(22);
//	// const ����
//	const MyClass& obj3 = MyClass{ 30 };
//	//obj3.SetData(33);					// ������� �ϹǷ� �� ���� �� �� ����
//	cout << "bye~~ " << endl;
//
//	return 0;
//}