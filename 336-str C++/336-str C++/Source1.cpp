#include<iostream>
#include<fstream>
using namespace std;
int main2()
{
	ifstream NewFile;
	ofstream Outfile;
	NewFile.open("NewFile.txt", ios::in);
	if (!NewFile.is_open())
	{
		cout << "File cannot be opened\n";
	}
	Outfile.open("OutFile.txt", ios::out);
	if (!Outfile)
	{
		cout << "File cannot be opened\n";
	}
	char ch;
	while (!NewFile.eof())
	{
		NewFile.get(ch);
		if (ch == '	')
		{
			ch = ' ';
			Outfile.put(ch);
		}
		else
		{
			Outfile.put(ch);
		}
	}
	return 0;
}