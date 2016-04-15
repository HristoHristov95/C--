#include<iostream>
#include<string>
#include<map>
using namespace std;
int main2()
{
	map<string, string> m;
	m.insert(pair<string, string>("Yes", "No"));
	m.insert(pair<string, string>("good", "bad"));
	m.insert(pair<string, string>("left", "right"));
	m.insert(pair<string, string>("up", "down"));
	cout << "Enter word to search for: \n";
	string moment;
	cin >> moment;
	map<string, string>::iterator p;
	p = m.find(string(moment));
	if (p != m.end())
	{
		cout << "Opposite is : " << p->second<<'\n';
	}
	else
	{
		cout << "Word not in map.\n";
	}
	return 0;
}