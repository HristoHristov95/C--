#include<iostream>
#include<fstream>
using namespace std;
void checkforerrors(ifstream &str)
{
	ios::iostate i;
	i = str.rdstate();
	if (i & ios::eofbit)
	{
		cout << "Eof encountered\n";
	}
	else if (i & ios::failbit)
	{
		cout << "Non-Fatal I/O error\n";
	}
	else if (i &ios::badbit)
	{
		cout << "Fatal I/O error\n";
	}
}
int main4()
{
	char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int coutt[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	ifstream NewFileName;
	char read[100];
	NewFileName.open("New.txt", ios::in);
	int i = 0;
	while (!NewFileName.eof())
	{
		read[i] = NewFileName.get();
		checkforerrors(NewFileName);
		i++;
	}
	for (int k = 0; k < i; k++)
	{
		for (int m = 0; m < 26; m++)
		{
			if (read[k] == alphabet[m])
			{
				coutt[m]++;
			}
		}
	}
	for (int k = 0; k < 26; k++)
	{
		cout << "Character #" << (k+1) << ":" << coutt[k]<<'\n';
	}
	return 0;
}