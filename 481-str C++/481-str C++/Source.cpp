#include<iostream>
#include<list>
using namespace std;
int main1()
{
	list<char> first,last;
	int i;
	for (int i = 0; i < 10; i++)
	{
		first.push_back('A' + i);
	}
	cout << "Size = " << first.size() << endl;
	list<char>::iterator p;
	cout << "Contents: \n";
	for (i = 0; i < first.size(); i++)
	{
		p = first.begin();
		cout << *p << '\n';
		first.push_back(*p);
		first.pop_front();
	}
	return 0;
}