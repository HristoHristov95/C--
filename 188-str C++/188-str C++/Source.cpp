#include<iostream>
#include<cstring>
using namespace std;

void mystrtol(char a[], int ob= 10)
{
	char *ptr;
	long l = strtol(a,&ptr,ob);
	cout << "The number is :" << l << "\n";
	cout << "The string is :" << ptr << "\n";
}
int main1()
{
	mystrtol("1234567 This is a test!");
	return 0;
}