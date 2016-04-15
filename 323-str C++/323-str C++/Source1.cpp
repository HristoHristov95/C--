#include<iostream>
#include<fstream>
using namespace std;
int main2()
{
	ifstream NewFile;
	int i = 0;
	NewFile.open("File.txt", ios::in);
	if (!NewFile)
	{
		cout << "File cannot be opened\n";
		exit(1);
	}
	char str[80];
	do
	{
		str[i] = NewFile.get();
		i++;
	} while (!NewFile.eof());
	str[i] = '\0';
	cout << "Here is the string that is read: " << str << '\n';
	return 0;
}