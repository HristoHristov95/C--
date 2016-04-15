#include<iostream>
#include<new>
using namespace std;
int main1()
{
	double *p;
	do{
		try{
			p = new double[100000];
		}
		catch (bad_alloc p){
			cout << "Allocating memory failure.\n";
			return 1;
		}
		cout << "Allocation OK.\n";
	} while (p);
	return 0;
}