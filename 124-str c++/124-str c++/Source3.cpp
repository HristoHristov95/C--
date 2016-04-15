#include<iostream>
using namespace std;
class base
{
	int a;
public:
	void load_a(int n){ a = n; }
	int get_a(){ return a; }
};
class derived :public base
{
	int b;
public:
	void load_b(int n){ b = n; }
	int get_b(){ return b; }
};
int main()
{
	int ret_a1;
	int ret_gg;
	base a1,a2;
	derived gg,gg1;
	a1.load_a(10);
	ret_a1 = a1.get_a();
	ret_gg = gg.get_a();
	cout << ret_a1;
	cout << "\n";
	cout << ret_gg;
	cout << "\n";
	return 0;
}