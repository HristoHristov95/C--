#include<iostream>
using namespace std;
class tail
{
	int a;
public:
	void funk();
};
typedef class tail aa;
void aa::funk()
{
	cout << "Please enter number for 'a':";
	cin >> a;
}
int main()
{
	aa s1[100];
	for (int i = 0; i < 99; i++)
	{
		s1[i].funk();
	}
	return 0;
}