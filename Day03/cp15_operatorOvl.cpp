//#include <iostream>
///* ������ �����ε� */
//// ��������
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0 ) : x{ ax }, y{ ay } {
//		printf("constructor call!\n");
//	}
//	void showPoint()
//	{
//		printf("x: %d, y: %d\n", x, y);
//	}
//	Point add(const Point& p)
//	{
//		printf("add() call!!\n");
//		return Point(x + p.x, y + p.y);
//	}
//};
//int main(void)
//{
//	Point obj1(10, 20);
//	obj1.showPoint();
//
//	Point obj2(30, 40);
//	obj2.showPoint();
//
//	Point obj3;
//	obj3 = obj1.add(obj2);
//	obj3.showPoint();
//}