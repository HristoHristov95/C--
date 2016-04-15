#include<iostream>
using namespace std;
class letters
{
	char ch;
public:
	letters(char c){ ch = c; }
	char get_ch(){ return ch; }
};
int main1()
{
	letters ob[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	for (int i = 0; i < 10; i++)
	{
		cout << "Letter #" << i << ":" << ob[i].get_ch() << "\n";
	}
	return 0;
}