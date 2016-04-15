#include<iostream>
using namespace std;
double divide(double a, double b)
{
	try{
		if (b == 0)throw b;
	}
	catch (double a){
		cout << "A number cannot be devided by 0.\n";
	}
	return a / b;
}
int main()
{
	double retValue;
	retValue = divide(2,2);
	cout << "Returned value is : " << retValue << '\n';
	return 0;
}