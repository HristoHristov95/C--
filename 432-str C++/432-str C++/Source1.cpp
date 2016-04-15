#include<iostream>
using namespace std;
class pwr{
	int base;
	int exp;
public:
	pwr(int b, int e){ base = b; exp = e; }
	operator int();
};
pwr::operator int()
{
	int temp=1;
	for (int i = 0; i < exp; i++)
	{
		temp = temp*base;
	}
	return temp;
}
int main()
{
	pwr ob(10, 2);
	int i = 0;
	i = ob;
	cout << "Value of i is : " << i<<'\n';
	return 0;
}