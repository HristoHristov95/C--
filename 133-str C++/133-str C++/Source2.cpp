#include<iostream>
using namespace std;
class letters
{
	char ch;
public:
	letters(char c){ ch = c; }
	char get_ch(){ return ch; }
};
int main3()
{
	letters ob[10] = { letters('a'), letters('b'), letters('c'), letters('d'), letters('e'), letters('f'), letters('g'), letters('h'), letters('i'), letters('j') };
	for (int i = 0; i < 10; i++)
	{
		cout << "Letter #" << i << ":" << ob[i].get_ch() << "\n";
	}
	return 0;
}