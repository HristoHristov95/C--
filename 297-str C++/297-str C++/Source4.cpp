#include<iostream>
#include<iomanip>
using namespace std;
int main5()
{
	ios::fmtflags f;
	cout.unsetf(ios::dec);
	f = (ios::showbase | ios::hex);
	cout.setf(f);
	cout << 25<<'\n';
	cout.unsetf(f);
	cout << 25 << '\n';
	return 0;
}