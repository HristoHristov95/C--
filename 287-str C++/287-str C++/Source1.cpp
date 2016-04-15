#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << hex; // OGROMNA ZABELEJKA !!! hex ne raboti kakto e dadeno v knigata .Nemoje da se izpolzva vuv setiosflags(...) trqabva da e izvun nego 
	cout << setiosflags(ios::showbase);
	cout << 100;
	cout << '\n';
	return 0;
}