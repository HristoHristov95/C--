#include<iostream>
using namespace std;
void center(char *s)
{
	int lenght;
	lenght = strlen(s);
	lenght = lenght / 2;
	cout.width(47);
	cout << s << '\n';
	cout.width(80);
}
int main2()
{
	center("GG madafaka :D");
	return 0;
}