#include<iostream>
using namespace std;
class A{
	 int a;
public:
	void ober(const int *x) const
	{
		int *v;
		v = const_cast<int*>(x);
		*v = 123;
	}
};
int main()
{
	int b = 12;
	const int c = 123;
	A object;
	object.ober(&b);
	cout << b << '\n';
	return 0;
}