#include<iostream>
using namespace std;
class summation
{
	int num;
	long sum;
public:
	void set_num(int n);
	void show_num(){ cout << num << "The sum is : " << sum << "\n"; }
};
void summation::set_num(int n)
{
	int i;
	num = n;
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
}
summation make_sum()
{
	int EnteredValue;
	cout << "Please enter number gazar: "<<"\n";
	cin >> EnteredValue;
	summation aa;
	aa.set_num(EnteredValue);
	return aa;
}
int main1()
{
	summation RevValue;
	RevValue=make_sum();
	RevValue.show_num();
	return 0;
}