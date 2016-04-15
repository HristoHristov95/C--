#include<iostream>
using namespace std;
class dist{
public:
	double distance;
	virtual void trav_time(){ cout << "The time needed in miles is : " << distance / 80 << '\n'; }
};
class metric :public dist{
public:
	void trav_time(){ cout << "The time needed in kilometers is : " << distance*1.6 / 100 << '\n'; }
};
int main()
{
	dist obj;
	obj.distance = 120;
	dist *p;
	metric obj2;
	obj2.distance = 120;
	p = &obj2;
	obj.trav_time();
	cout << '\n' << '\n';
	p->trav_time();
	return 0;
}