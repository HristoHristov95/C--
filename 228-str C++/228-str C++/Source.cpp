#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype
{
	char *p;
	int len;
public:
	strtype(char *s);
	~strtype(){ cout << "Freeing " << p << "\n"; delete[]p; }
	char *get(){ return p; }
	strtype &operator=(strtype &ob);
	char &operator[](int i);
};
strtype::strtype(char *s)
{
	int l;
	l = strlen(s) + 1;
	p = new char[l];
	if (!p)
	{
		cout << "Allocatig memory error\n";
		exit(1);
	}
	len = l;
	strcpy(p, s);
}
char &strtype::operator[](int i)
{
	return p[i];
}
strtype &strtype::operator=(strtype &ob)
{
	if (len < ob.len)
	{
		delete[]p;
		p = new char[ob.len];
		if (!p)
		{
			cout << "Allocating memory error\n";
			exit(1);
		}
	}
	len = ob.len;
	strcpy(p, ob.p);
	return *this;
}
int main1()
{
	strtype obj("Hello");
	cout << "The character is : " << obj[3]<<"\n";
	obj[4] = 'e';
	cout << "The character is : " << obj[4]<<"\n";
	return 0;
}