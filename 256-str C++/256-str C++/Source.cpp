#include<iostream>
using namespace std;
class A{
	int i;
public:
	A(int a){ i = a; }
	void show1(){ cout << i << "\n"; }
};
class B{
	int j;
public:
	B(int a){ j = a; }
	void show2(){ cout << j << "\n"; }
};
class C :public A, public B{
	int k;
public:
	C(int a, int b, int c) :A(c), B(b){ k = a; }
	void show3(){ cout << k << "\n"; }
};
int main()
{
	C ob(1, 2, 3);
	ob.show1();
	ob.show2();
	ob.show3();
	return 0;
}