#include<iostream>
using namespace std;
class samp
{
	int a;
public:
	samp(int o){ a = o; cout << "Constructing for ob(88).\n"; }
	samp(){ a = 0; cout << "Constructing for array[10].\n"; }
	int get_a(){ return a; }
};
int main()
{
	samp ob(88);
	samp obarray[10];
	return 0;
}