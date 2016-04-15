#include<iostream>
#include<cstring>
using namespace std;
class strtype{
	char str[80];
	int len;
public:
	strtype(char *s){ strcpy(str, s); len = strlen(s); }
	operator int(){ return len; }
};
int main1()
{
	strtype s("This is a test.\n");
	int lenght;
	lenght = s;
	cout << "Here is the lenght: " << lenght;
	return 0;
}