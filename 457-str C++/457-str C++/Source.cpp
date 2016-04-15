#include<iostream>
using namespace std;
class X{
	int a, b;
public:
	X(int i, int j){ a = i; b = j; }
	operator int();
};
 X::operator int()
{
	 return (a + b);
}
 int main()
 {
	 int i = 0;
	 X obj(10, 10);
	 i = obj;
	 cout << i << '\n';
	 return 0;
 }