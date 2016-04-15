#include<iostream>
using namespace std;
extern "C"{
	int counter(int x);
}
int counter(int x)
{
	return x / 3;
}
int main1()
{
	int x = 9;
	int returnedValue;
	returnedValue =counter(x);
	cout << "Returned value is : " << returnedValue << '\n';
	return 0;
}