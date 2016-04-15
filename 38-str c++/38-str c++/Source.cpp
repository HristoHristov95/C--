#include<iostream>
using namespace std;
int main1()
{
	char ch;
	int i = 0;
	double broichasove;
	double br1[10];
	double vuznagrajdenie;
	double br2[20];
	double obshtasuma=0;
	do
	{
	cout << "Please enter your work hours\n";
	cin >> broichasove;
	br1[i] = broichasove;
	cout << "Please enter your payment\n";
	cin >> vuznagrajdenie;
	br2[i] = vuznagrajdenie;
	cout << "Press X to stop or anykey to continue...\n";
	fflush(stdin);
	cin >> ch;
	i++;
	} while (ch !='x');
	for (int m = 0; m < i; m++)
	{
		obshtasuma += br2[m];
	}
	cout << "The total sum is : " << obshtasuma<<"\n";
	return 0;
}