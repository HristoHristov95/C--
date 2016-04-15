#include<iostream>
#include<fstream>
using namespace std;
int main2()
{
	ofstream FileName;
	char string[100];
	FileName.open("NewPhone.bin", ios::binary | ios::out);
	FileName.write("Isaac Newton, 415 555-3423\n", 27*sizeof(char));
	FileName.write("Robert Goddart, 213 555-2312\n", 29 * sizeof(char));
	FileName.write("Enrico Fermini, 202 555-1111",29*sizeof(char));
	FileName.close();
	ifstream FileOpen;
	FileOpen.open("NewPhone.bin", ios::binary | ios::in);
	FileOpen.read(string, 85 * sizeof(char));
	//string[85] = '\0';
	cout << "The string is : " << string << '\n';
	return 0;
}