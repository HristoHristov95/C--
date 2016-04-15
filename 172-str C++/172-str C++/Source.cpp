#include<iostream>
#include<cstring>
using namespace std;
class strtype
{
	char *p;
	int len;
public:
	strtype();
	strtype(char *ptr, int bites);
	~strtype(){ delete[]p; }
	char *getstring(){ return p; }
	int getlenght(){ return len; }
};
strtype::strtype()
{
	p = new char[255];
	len = 255;
	p = NULL;
}
strtype::strtype(char *ptr, int bites)
{
	len = strlen(ptr);
	if (len > bites)
	{
		cout << "Error not enough bites.\n";
		exit(1);
	}
	p = new char[bites];
	if (!p)
	{
		cout << "Error allocating memory.\n";
		exit(1);
	}
	strcpy(p, ptr);
}
int main()
{
	strtype ob(), ob1("This is just a test.", 22);
	cout << "The string is : " << ob1.getstring() << " And the lenght is :" <<ob1.getlenght()  << "\n";

	return 0;
}