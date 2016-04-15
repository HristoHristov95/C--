#include<iostream>
using namespace std;
istream &skipchar(istream &stream)
{
	char ch;
	for (int i = 0; i < 10; i++)
	{
		cin>> ch;
	}
	return stream;
}
int main()
{
	char op[10];
	cin >> skipchar >> op;
	cout << op;
	return 0;
}