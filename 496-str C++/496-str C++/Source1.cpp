#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	list<int> l,q,result(30);
	int i;
	for (i = 10; i > 0; i--)
	{
		l.push_back(i);
	}
	for (i = 0; i < 10; i++)
	{
		q.push_back(i);
	}
	l.sort();
	q.sort();
	merge(l.begin(),l.end(), q.begin(),q.end(), result.begin());
	list<int>::iterator p;
	p = result.begin();
	cout << "Result: \n";
	while (p != result.end())
	{
		cout << *p << ' ';
		p++;
	}
	cout << endl;
	return 0;
}