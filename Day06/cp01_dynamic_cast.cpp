#include <iostream>
/* �⺻ Ŭ������ �����ϴ� lavalue�� �Ļ��� Ŭ������ ���� ������ ��ȯ 
 * ��Ӱ��迡�� �����Ѱ� ����ȯ�� �����Ѵ�. (��ĳ����)
 * �ٿ�ĳ������ ���� �������� ���ؼ� virtual �޼��尡 �� �־�� �Ѵ�.
 */

class Super
{
public:
	int n1, n2;
};
class Sub : public Super
{
public:
	int n3, n4;
};
class Sub2 : public Sub
{
public:
	int n5;
};
int main()
{
	Super* sp;
	Sub* sup;
	Sub2* sup2;
	Sub2 obj{};

	sup2 = dynamic_cast<Sub2*>(&obj);
	sup = dynamic_cast<Sub*>(sup2); // upcasting
	sp = dynamic_cast<Super*>(sup2);// upcasting
}