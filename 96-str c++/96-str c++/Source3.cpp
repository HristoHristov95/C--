#include<iostream>
using namespace std;
class preobrazuvane
{
	float feet1[10];
	float inch1[10];
	float feet;
	float inch;
public:
	preobrazuvane(float a1,int i);
};
preobrazuvane::preobrazuvane(float a1,int i)
{
	feet1[i] = a1;
	inch = a1 * 12;
	inch1[i] = inch;
	cout << "The number you entered in inches is : " << inch<<"\n";
}
int main4()
{
	float feet;
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter number of feet to be converted into inches : ";
		cin >> feet;
		preobrazuvane a1(feet,i);
	}
	return 0;
}