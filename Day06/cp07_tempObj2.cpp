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
//	//MyClass& obj2  = MyClass{ 20 };		// 임시객체는 참조를 사용할 수 없다.
//	MyClass obj = MyClass{ 10 };
//	obj.SetData(20);
//
//	MyClass&& obj2 = MyClass{ 20 };
//	obj2.SetData(22);
//	// const 참조
//	const MyClass& obj3 = MyClass{ 30 };
//	//obj3.SetData(33);					// 상수참조 하므로 값 변경 할 수 없음
//	cout << "bye~~ " << endl;
//
//	return 0;
//}