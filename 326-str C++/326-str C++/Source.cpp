#include<iostream>
#include<fstream>
using namespace std;
int main1()
{
	char ch;
	char a[100];
	int i = 0;
	ifstream NewOpenedFile;
	NewOpenedFile.open("New.txt", ios::in);
	if (!NewOpenedFile)
	{
		cout << "Error opening file\n";
		exit(1);
	}
	NewOpenedFile.seekg(0, ios::beg);
	while (!NewOpenedFile.eof())
	{
		NewOpenedFile.get(ch);
		a[i] = ch;
		i++;
	}
	a[i] = '\0';
	for (; i > 0; i--)
	{
		cout << a[i];
	}
	NewOpenedFile.close();
	return 0;
}