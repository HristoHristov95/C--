#include<iostream>
#include<cstring>
using namespace std;
class mybase
{
	char str[80];
public:
	mybase(char *s){ strcpy(str, s); }
	char *get(){ return str; }
};
class myderived :public mybase
{
	int len;
public:
	myderived(char *str) :mybase(str){
		int i;
		i = strlen(str);
		len = i;
	}
	int getlen(){ return len; }
	void show(){ cout << get() << "\n"; }
};
int main1()
{
	myderived ob("Hello");
	ob.show();
	cout << ob.getlen() << '\n';
	return 0;
}
