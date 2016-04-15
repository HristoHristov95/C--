#include<iostream>
#include<string.h>
using namespace std;
void rev_str(char str[])
{
	int a = 0;
	char c;
	a = strlen(str)-1;
	for (int i = 0,m=a; i < m; i++,m--)
	{
		c = str[i];
		str[i] = str[m];
		str[m] = c;
	}
	cout << "The reversed string is : " << str;
}
void rev_str(char str[],char str1[])
{
	int a = 0;
	a = strlen(str)-1;
	for (int i = 0, m = a; i < a; i++, m--)
	{
		str1[i] = str[m];
	}
	cout << "The string is : " << str1;
}
int main2()
{
	char string[20],string1[20];
	cout << "Please enter string : ";
	cin >> string;
	cout << "Please enter second string : ";
	cin >> string1;
	//rev_str(string);
	rev_str(string, string1);
	return 0;
}