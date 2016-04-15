#include<iostream>
#include<time.h>
using namespace std;
ostream &td(ostream &stream)
{
	time_t p;
	time(&p);
	stream << "The time is : " << ctime(&p);
	return stream;
}
int main1()
{
	cout << td<<'\n';
	return 0;
}