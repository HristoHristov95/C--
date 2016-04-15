#include<iostream>
#include<fstream>
using namespace std;
int main1()
{
	char str[80];
	char *p;
	cout << "Enter your name : \n";
	//cin.get(str, 80);
	/*for (int i = 0; i < 80; i++)
	{
		str[i] = cin.get();
		if (str[i] == 'a')
		{
			break;
			str[i] = '\0';
		}
	}*/

	cin.getline(str, 80);
	cout << str << "\n";
	return 0;
}