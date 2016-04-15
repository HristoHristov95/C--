#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main1()
{
	string abc;
	int a=0;
	cout << "Please enter string so you can see its lenght: ";
	cin >> abc;
	a = strlen(abc.c_str());
	cout << "The string lenght is : " << a;
	return 0;
}