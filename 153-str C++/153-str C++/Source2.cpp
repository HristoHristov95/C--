#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype
{
	char *p;
public:
	strtype(char *s);
	~strtype(){ delete[]p; cout<< "Destructing\n"; }
	char *get(){ return p; }
};
strtype::strtype(char *s)
{
	int l;
	l = strlen(s) + 1;
	p = new char[l];
	if (!p)
	{
		cout << "Error allocating memory\n";
		exit(1);
	}
	strcpy(p, s);
}
void show(strtype &x)
{
	char *s;
	s = x.get();
	cout << s << "\n";
}
int main()
{
	strtype a("Hello"), b("There"),c("Men");
	show(a);
	show(b);
	show(c);
	return 0;
}