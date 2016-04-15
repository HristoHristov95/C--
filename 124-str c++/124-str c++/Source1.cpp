#include<iostream>
using namespace std;
#define size 26
class stack
{
public:
	stack(){ count = 0; }
	char stck[size];
	int count;
};
stack loadstack(stack a)
{
	char c;
	for (c = 97; c <= 122; c++)
	{
		a.stck[a.count++] = c;
	}
	return a;
}
stack loadstack(stack a,int upp)
{
	char c;
	if (upp == 1)
	{
		for (c = 65; c <=90; c++)
		{
			a.stck[a.count++] = c;
		}
	}
	else
	{
		for (c = 97; c <= 122; c++)
		{
			a.stck[a.count++] = c;
		}
	}
	return a;
}
int main3()
{
	int upper;
	char choise='a';
	stack ob1, ob2;
	cout << "Do you want to enter value for upper?(Y/N)";
	while ((choise != 'Y') && (choise !='N') && (choise != 'y')&&(choise !='n'))
	{
		fflush(stdin);
		cin >> choise;
	}
	if (choise == 'y' || choise == 'Y')
	{
		cout << "Please enter value for upper : ";
		fflush(stdin);
		cin >> upper;
		ob1 = loadstack(ob1, upper);
	}
	else
	{
		ob1 = loadstack(ob1);
	}
	ob2 = ob1;
	for (int i = 0; i < 26; i++)
	{
		cout << ob2.stck[i] << "\n";
	}
	return 0;
}