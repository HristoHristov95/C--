#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype{
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype(){ delete[]p; }
	friend ostream &operator<<(ostream &stream, strtype &ob);
};
strtype::strtype(char *ptr)
{
	len = strlen(ptr) + 1;
	p = new char[len];
	if (!p)
	{
		cout << "Allocating error\n";
		exit(1);
	}
	strcpy(p, ptr);
}
ostream &operator<<(ostream &stream, strtype &obj)
{
	stream << obj.p << ' ';
	return stream;
}
int main1()
{
	strtype obj1("This is a test."), s2("I LIKE C++.");
	cout << obj1 << '\n' << s2;
	return 0;
}