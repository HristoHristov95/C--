#include<iostream>
using namespace std;
void mag(long &num, long order)
{
	int stepen=1;
	for (int i = 0; i < order; i++)
	{
		stepen = 10 * stepen;
	}
	num = num*stepen;
}
int main()
{
	long num;
	int order;
	cout << "Please enter number for num: "<<"\n";
	cin >> num;
	cout << "Please enter number for order:" << "\n";
	cin >> order;
	mag(num, order);
	cout << "The last result is :" << num << "\n";
	return 0;
}