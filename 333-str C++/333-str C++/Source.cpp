#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
ostream &newline(ostream &stream)
{
	stream << '\n' << '\n' << '\n' << setw(20);
	return stream;
}
int main1()
{
	cout << newline<< "GG";
	return 0;
}