#include<iostream>
#include<strstream>
using namespace std;
int main1()
{
	char buf[255];
	ostrstream ostr(buf, sizeof buf);
	ostr << "Array based I/O uses stream just like ";
	ostr << "normal I/O \n" << 100;
	ostr << ' ' << 123.23<<'\n';
	ostr << hex << 100 << ' ';
	ostr.setf(ios::scientific);
	ostr << dec << 123.23;
	ostr << endl;
	int lenght = 0;
	lenght = ostr.pcount();
	cout << ";enght for now is : " << lenght<<'\n';
	ostr << ends;

	return 0;
}