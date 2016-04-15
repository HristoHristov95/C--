#include<iostream>
#include<fstream>
using namespace std;
void checkstatus(ifstream &sts)
{
	ios::iostate i;
	i = sts.rdstate();
	if (i & ios::eofbit)
	{
		cout << "EOF encountered \n";
	}
	else if (i & ios::failbit)
	{
		cout << "Non-Fatal I/O error\n";
	}
	else if (i & ios::failbit)
	{
		cout << "Fatal I/O error\n";
	}
}
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
		checkstatus(NewOpenedFile);
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