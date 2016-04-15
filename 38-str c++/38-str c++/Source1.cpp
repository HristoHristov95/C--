#include<iostream>
using namespace std;
int main2()
{
	double foots;
	double rezultat;
	cout << "If you want to stop the program enter 0 for feet\n";
	do
	{
		cout << "Please enter number of feet to be converted into inches: \n";
		cin >> foots;
		rezultat = 12.00*foots;
		cout << "The number in inches is : " << rezultat<<"\n";
	} while (foots != 0);
	return 0;
}