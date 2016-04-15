#include<iostream>
#include<math.h>
using namespace std;
int sroot(int a)
{
	return sqrt(a);
}
long sroot(long a)
{
	return sqrt(a);
}
double sroot(double a)
{
	return sqrt(a);
}
int main1()
{
	int number = 0;
	long number1 = 0;
	double number2 = 0.00;
	double return1 = 0;
	cout << "Please enter  integer to be square rooted : ";
	cin >> number;
	cout << "Please enter  long integer to be square rooted : ";
	cin >> number1;
	cout << "Please enter  float integer to be square rooted : ";
	cin >> number2;
	return1=sroot(number2);
	cout << "The number is : " << return1<<"\n";
	return 0;
}