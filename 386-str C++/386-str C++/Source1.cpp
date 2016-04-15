#include<iostream>
using namespace std;
int main2()
{
	try{
		throw 10;
	}
	catch (int &p)
	{
		cout << "Caught one\n";
	}
	return 0;
}