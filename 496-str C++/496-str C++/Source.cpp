#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main1()
{
	list<int> l;
	int i;
	for (i = 10; i > 0; i--)
	{
		l.push_back(i);
	}
	list<int>::iterator p;
	p = l.begin();
	while (p != l.end())
	{
		cout << "Contents: " << *p << ' ';
		p++;
	}
	cout << endl;
	l.sort();
	p = l.begin();
	while (p != l.end())
	{
		cout << "Here is sorted: " << *p << ' ';
		p++;
	}
	cout << endl;
	return 0;
}