#include<iostream>
using namespace std;
class samp
{
	int a, b;
public:
	samp(int n, int m){ a = n; b = m; }
	int get_a(){ return a; }
	int get_b(){ return b; }
};
int main1()
{
	samp ob[4] = { samp(1, 2), samp(3, 4), samp(5, 6), samp(7, 8) };
	int i;
	for (int i = 3; i >= 0; i--)
	{
		cout << ob[i].get_a() << ' ';
		cout << ob[i].get_b() << "\n";
	}
	cout << "\n";
	return 0;
}