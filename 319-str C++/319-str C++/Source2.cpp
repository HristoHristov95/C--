#include<iostream>
#include<fstream>
using namespace std;
int main3()
{
	ifstream Name;
	Name.open("New1.bin",ios::binary | ios::out);
	char string[100];
	char ch;
	int count=0,i=0,flag=0,flag1=0;
	Name.read(string, 100 * sizeof(char));
	do
	{
		ch = string[i];
		if (ch = ' '&&flag == 0)
		{
			flag = 1;
			i++;
			continue;
		}
		if (ch == ' '&&flag == 1)
		{
			count++;
			flag = 0;
		}
		i++;
	} while (ch != '\0');
	cout << "The number of words is : " << count << '\n';
	return 0;
}