#include<iostream>
using namespace std;
class airship{
	int passangers;
	int loadInFeet;
public:
	airship(int a, int b){ passangers = a; loadInFeet = b; }
	void show(){ cout << "Passangers: " << passangers << " " << "Load: " << loadInFeet << '\n'; }
};
class airplane :public airship{
	char engine[10];
	int flyrange;
public:
	airplane(char *s, int f,int p,int l):airship(p,l){ strcpy(engine, s); flyrange = f; }
	void showa(){ show(); cout << "Engine type: " << engine << " " << "Fly range: " << flyrange << "\n"; }
};
class ballon :public airship{
	char gas[10];
	int maxHeight;
public:
	ballon(char *s, int m,int p,int l):airship(p,l){ strcpy(gas, s); maxHeight = m; }
	void showb(){ show(); cout << "Gas: " << gas << ' ' << "Max Height: " << maxHeight << "\n"; }
};
int main1()
{
	ballon obj1("vodorod", 100, 5, 80);
	airplane obj2("Reaktiven", 1000, 2, 50);
	obj1.showb();
	obj2.showa();
	return 0;
}