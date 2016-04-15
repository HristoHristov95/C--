#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype
{
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype(){ cout << "Freeing p\n"; free(p); }
	void show(){ cout << p << "-lenght : " << len<<"\n"; }
};
strtype::strtype(char *ptr)
{
	len = strlen(ptr);
	p = (char*)malloc(len + 1);
	if (p == NULL)
	{
		cout << "Error allocating memory\n";
		exit(1);
	}
	strcpy(p, ptr);
}
int main()
{
	strtype s1("This is a test.\n"), s2("I like C++.\n");
	s1.show();
	s2.show();
	return 0;
}