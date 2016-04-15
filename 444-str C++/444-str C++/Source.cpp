#include<iostream>
using namespace std;
class myclass{
	int a;
public:
	explicit myclass(int x){ a = x; }
	myclass(char *str){ a = atoi(str); }
	int geta(){ return a; }
};
int main1()
{
	myclass ob1(4);
	myclass ob2 = "123";

	return 0;
}