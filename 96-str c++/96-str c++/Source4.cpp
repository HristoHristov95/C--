#include<iostream>
#include<stdlib.h>
using namespace std;
class dice
{
	int chislo;
public:
	void roll();
};
void dice::roll()
{
	
	for (;;)
	{
		chislo = rand();
		if (chislo <= 6 && chislo >= 1)
		{
			break;
		}
	}
	cout << "The number rolled is  : " << chislo;
	cout << "\n";
}
int main()
{
	dice ob;
	ob.roll();
	return 0;
}