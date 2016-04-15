#include<iostream>
#include<string>
#include<list>
using namespace std;
int main1()
{
	list<string> l;
	l.push_back("One");
	l.push_back("Six");
	l.push_back("Two");
	l.push_back("Seven");
	l.push_back("Three");
	l.push_back("Eight");
	l.push_back("Four");
	l.push_back("Nine");
	l.push_back("Five");
	l.push_back("Ten");
	l.sort();
	list<string>::iterator p;
	p = l.begin();
	while (p != l.end())
	{
		cout << *p<<' ';
		p++;
	}
	return 0;
}
