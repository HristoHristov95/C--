#include<iostream>
#include<fstream>
using namespace std;
void checkstatus(fstream &sts)
{
	ios::iostate i;
	i = sts.rdstate();
	if (i & ios::eofbit)
	{
		cout << "EOF encountered \n";
	}
	else if (i & ios::failbit)
	{
		cout << "Non-Fatal I/O encountered\n";
	}
	else if (i & ios::badbit)
	{
		cout << "Error I/O encountered\n";
	}
}
int main()
{
	long long position = 0;
	char a[100];
	int i = 0;
	char ch, ch1;
	fstream NewFile;
	NewFile.open("New.txt", ios::in | ios::out);
	/*while (!NewFile.eof())
	{
	position = NewFile.tellg();
	NewFile.get(ch);
	NewFile.get(ch1);
	NewFile.seekp(position);
	NewFile.put(ch1);
	NewFile.put(ch);;
	i++;
	}*/
	while (!NewFile.eof())
	{

		NewFile.get(ch);
		checkstatus(NewFile);
		a[i] = ch;
		i++;
	}
	for (int k = 0; k < i; k = k + 2)
	{
		ch = a[k];
		ch1 = a[k + 1];
		a[k] = ch1;
		a[k + 1] = ch;
	}
	NewFile.close();
	NewFile.open("New.txt", ios::in | ios::out);
	for (int k = 0; k < i - 1; k++)
	{
		NewFile.put(a[k]);
	}
	NewFile.close();
	return 0;
}