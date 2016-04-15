#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main1()
{
	vector<int> objects(10);
	list<int> l;
	for (int i = 0; i < 10; i++)
	{
		objects[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		if ((objects[i] % 2) == 0)
		{
			l.push_back(objects[i]);
		}
	}
	list<int>::iterator p;
	p = l.begin();
	for (int i = 0; i < l.size(); i++,p++)
	{
		cout << "Pop: " << *p << '\n';
	}
	return 0;
}