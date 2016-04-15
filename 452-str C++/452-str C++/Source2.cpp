#include<iostream>
#include<strstream>
using namespace std;
int main()
{
	char string[100];
	char string1[100];
	float istring[10];
	char c;
	float number;
	ostrstream ostr(string, sizeof(string));
	//ostr << "123.12";
	/*istring[0] = atof(string);
	cout << istring[0] << '\n';*/
	ostr << "This is a string \n" << 112.12 << " This is the next";
	istrstream istr(string);
	istr.getline(string1, 100);
	istr >> number;
	cout << "Number is : " << number << '\n';
	return 0;
}