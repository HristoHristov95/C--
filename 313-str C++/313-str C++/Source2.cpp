#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream openedfile;
	char ch[100],p;
	int flag=0,count=0,i=0,flag1=0;
	openedfile.open("newWord.txt", ios::in);
	if (!openedfile.is_open())
	{
		cout << "The file cannot be opened.\n";
		exit(1);
	}
	openedfile.getline(ch, 100);
	do
	{
		p = ch[i];
		if (ch[0] != ' '&& flag1==0)
		{
			p = ' ';
			flag1 = 1;
		}
		if (p == ' '&&flag == 0)
		{
			flag = 1;
		}
		if (p == ' '&&flag == 1)
		{
			count++;
			flag = 0;
		}
		i++;
	} while (p != '\0');
	cout << "The number of words is : " << count<<'\n';
	return 0;
}