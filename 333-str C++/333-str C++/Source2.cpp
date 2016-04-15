#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void checker(ifstream &newname)
{
	ios::iostate i;
	i = newname.rdstate();
	if (i & ios::eofbit)
	{
		cout << "End of file encountered\n";
	}
	else if (i & ios::failbit)
	{
		cout << "Non-Fatal I/O error\n";
	}
	else if (i & ios::badbit)
	{
		cout << "Fatal I/O error\n";
	}
}
int main()
{
	ifstream NewName;
	int c=0;
	NewName.open("New.txt", ios::in);
	string line;
	if (!NewName)
	{
		cout << "Cannot open file\n";
		exit(1);
	}
	while (getline(NewName, line))
	{
		c += line.length();
	}
	NewName.close();
	NewName.open("New.txt", ios::in);
	char *p = new char[c];
	NewName.get(p, c);
	checker(NewName);
	int i = 0;
	while (i < c)
	{
		if ((p[i] >= 65) && (p[i] <= 90))
		{
			p[i]=tolower(p[i]);
		}
		else
		{
			p[i]=toupper(p[i]);
		}

		i++;
	}
	ofstream NewFile;
	NewFile.open("Result.txt", ios::out);
	for (i = 0; i < c; i++)
	{
		NewFile.put(p[i]);
	}
	NewName.close();
	NewFile.close();
	return 0;
}