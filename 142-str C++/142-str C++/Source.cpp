#include<iostream>
using namespace std;
int main1()
{
	float *a;
	long *b;
	char *c;
	a = new float;
	b = new long;
	c = new char;
	if ((!a) || (!b) || (!c))
	{
		cout << "Error allocating memory\n";
		exit(1);
	}
	*a = 5.555555;
	*b = 10L;
	*c = 'f';
	cout << "The float is : " << *a<<"\n";
	cout << "The long is : " << *b<<"\n";
	cout << "The char is : " << *c<<"\n";
	delete a, b, c;
	return 0;
}