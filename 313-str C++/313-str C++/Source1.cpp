#include<iostream>
#include<fstream>
using namespace std;
int main2()
{
	ofstream newfile;
	newfile.open("Phone.txt", ios::out);
	if (!newfile)
	{
		cout << "File cannot be created \n";
		exit(1);
	}
	newfile << "Issac Newton, " << "415 555 - 3423"<<'\n';
	newfile << "Robert Goddart, " << "213 555-2312" << '\n';
	newfile << "Enrico Fermini, " << "202 555-1111" << '\n';
	newfile.close();
	return 0;
}