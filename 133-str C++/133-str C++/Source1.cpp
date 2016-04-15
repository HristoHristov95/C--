#include<iostream>
using namespace std;
class squares
{
	int num, sqr;
public:
	squares(int a, int b){ num = a; sqr = b; }
	void show(){ cout << num << ' ' << sqr << "\n"; }
};
int main()
{
	int sqr[10]; 
	int count[10];
	//squares ob[10] = { squares(1, 1), squares(2, 4), squares(3, 9), squares(4, 16), squares(5, 25), squares(6, 36), squares(7, 49), squares(8, 64), squares(9, 81), squares(10, 100) };
	for (int i = 0; i < 10; i++)
	{
		sqr[i] = i*i;
		count[i] = i;
	}
		squares ob[10] = { squares(count[0], sqr[0]), squares(count[1], sqr[1]), squares(count[2], sqr[2]), squares(count[3], sqr[3]), squares(count[4], sqr[4]), squares(count[5], sqr[5]), squares(count[6], sqr[6]), squares(count[7], sqr[7]), squares(count[8], sqr[8]), squares(count[9], sqr[9]) };
		for (int i = 0; i < 10; i++)
		{
			ob[i].show();
		}

	return 0;
}