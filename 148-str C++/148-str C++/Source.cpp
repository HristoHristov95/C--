#include<iostream>
using namespace std;
int main1()
{
	char *p = new char[100];
	strcpy(p, "This is a test!");
	cout << p<<"\n";
	delete[]p;
	return 0;
}