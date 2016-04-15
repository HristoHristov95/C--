#include<iostream>
#include<iomanip>
using namespace std;
int main4()
{   //#1
	/*
	cout << 100<<'\n';
	cout << hex << 100 << '\n';
	cout << oct << 100 << '\n';
	return 0;
	*/
	//#2
	cout << setw(20) << left << setfill('*') << 100 << endl;
	return 0;
}