#include <iostream>
/* ��ȯ����: �� ��ü�� ���θ� �����ϰ�, �� �� shared_ptr�� ����Ͽ� ������ �����ϴ� ��쿡 �߻� */
using namespace std;
struct B;
struct A
{
	shared_ptr<B> b_ptr;
};
struct B
{
	//shared_ptr<A> a_ptr;
	weak_ptr<A> a_ptr;
};
int main(void)
{
	shared_ptr<A> a(new A());
	shared_ptr<B> b(new B());

	a->b_ptr = b;
	b->a_ptr = a;

	return 0;

}