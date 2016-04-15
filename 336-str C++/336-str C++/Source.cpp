#include<iostream>
#include<iomanip>
using namespace std;
ostream &outstream(ostream &stream)
{
	stream.unsetf(ios::dec);
	stream.setf(ios::scientific | ios::uppercase);
	return stream;
}
int main1()
{
	cout << outstream << 10.13;
	return 0;
}