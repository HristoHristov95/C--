#include<iostream>
#include<map>
using namespace std;
class Name{
	char str[20];
public:
	Name(){ strcpy(str, ""); }
	Name(char *s){ strcpy(str, s); }
	char *get(){ return str; }
};
class Number{
	char str[20];
public:
	Number(){ strcpy(str, ""); }
	Number(char *s){ strcpy(str, s); }
	char *get(){ return str; }
};
bool operator<(Name a, Name b)
{
	return strcmp(a.get(), b.get()) < 0;
}
int main()
{
	map<Name, Number> m;
	m.insert(pair<Name, Number>(Name("Hristo"), Number("0897903663")));
	m.insert(pair<Name, Number>(Name("alabala"), Number("123123")));
	m.insert(pair<Name, Number>(Name("Todor"), Number("12312")));
	char s[80];
	cout << "Enter Name to find Number: \n";
	cin >> s;
	map<Name, Number>::iterator p;
	p = m.find(s);
	if (p != m.end())
	{
		cout << p->second.get();
	}
	else
	{
		cout << "No matching elements.\n";
	}
	
	return 0;
}