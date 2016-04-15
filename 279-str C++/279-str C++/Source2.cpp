#include<iostream>
using namespace std;
int main()
{
	int a = 100;
	ios::fmtflags f = ios::showbase | ios::hex;
	cout.flags(f);
	cout << 100<<'\n';
	cout.unsetf(f);
	cout << 100 << '\n';

	return 0;
}