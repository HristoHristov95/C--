#include<iostream>
using namespace std;
ostream &sethex(ostream &stream)
{
	cout.unsetf(ios::dec);
	cout << hex;
	cout.setf(ios::uppercase | ios::showbase);
	return stream;
}
ostream &unsetex(ostream &stream)
{
	cout.unsetf(ios::uppercase | ios::showbase);
		return stream;
}
int main2()
{
	cout << sethex << 100 << " gg" << '\n';
	cout << unsetex << 100 << " gg" << "\n";
		return 0;
}