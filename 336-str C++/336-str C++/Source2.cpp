#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream NewFile;
	char ch;
	int flag = 0, flag1 = 0, flag2 = 0,i=0,result=-1,count=0,count1=0;
	char str[100];
	char str1[100];
	cout << "Please enter name of text document : \n";
	NewFile.open(argv[1], ios::in);
	if (!NewFile.is_open())
	{
		cout << "Cannot open requested file\n";
	}
	if (argc == 2)
	{
		cout << "You havent entered word to search \n";
	}
	NewFile.getline(str, 100);
	for (int i = 0; i < 100; i++)
	{
		ch = str[i];
		if (ch == ' ' && flag==0)
		{
			flag1 = 1;
			flag = 1;
			continue;
		}
		if (ch == ' '&&flag == 1)
		{
			flag1 = 1;
			for (int m = 0; m < 15; m++)
			{
				str1[m] = '\0';
			}
			count1 = 0;
			continue;
		}
		if (flag1 == 1)
		{
			str1[count1] = str[i];
			result=strcmp(str1, argv[2]);
			if (result == 0)
			{
				count++;
			}
			if (str[i] == '\0')
			{
				break;
			}
			count1++;
		}

	}
	cout << "The word has been encountered : " << count << ' ' << "times.\n";
	system("Pause");
	return 0;
}