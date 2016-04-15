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
	~strtype(){ free(p); }
	void show();
	friend char *get_string(strtype *a);
};
strtype::strtype(char *ptr)
{
	len = strlen(ptr);
	p = (char*)malloc(len + 1);
	if (!p)
	{
		cout << "Allocation error\n";
		exit(1);
	}
	strcpy(p, ptr);
}
void strtype::show()
{
	cout << p << " -lenght :" << len;
	cout << "\n";
}
char *get_string(strtype *ok)
{
	return ok->p;
}
int main4()
{

	char *Retvalue;
	strtype ob("kurec");

	Retvalue=get_string(&ob);
	cout << Retvalue;
	cout << "\n";
	ob.show();
	return 0;
}
