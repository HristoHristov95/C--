#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main2()
{
	string str;
	cout << "Please enter string :  \n";
	getline(cin, str);
	int size,encounter=0;
	size = str.size();
	for (int i = 0; i < size; i++)
	{
		if ('e' == str[i])
		{
			encounter++;
		}
	}
	cout << "Encounter is : " << encounter << '\n';
	return 0;
}