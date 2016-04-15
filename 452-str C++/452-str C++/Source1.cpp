#include<iostream>
#include<strstream>
using namespace std;
int main2()
{
	char string[255];
	char istring[255];
	ostrstream ostr(string, sizeof string);
	istrstream istr(istring);
	ostr << "This string is awesome!!!";
	for (int i = 0; i < ostr.pcount(); i++)
	{
		istring[i] = string[i];
		istring[i + 1] = '\0';
	}

	cout << istring << '\n';
	return 0;
}