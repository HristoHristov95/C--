#include<iostream>
using namespace std;
int main2()
{
	cout << 100<<'\n';
	cout.unsetf(ios::dec); //za Visual Studio tova unsetf e neobhodimo za da rabotqt setf .
	cout.setf(ios::hex);
	cout << 100<<'\n';
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << 100 << '\n';
	return 0;
}