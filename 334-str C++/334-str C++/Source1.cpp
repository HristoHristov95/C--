#include<iostream>
#include<fstream>
using namespace std;
class stack{
	char ch;
public:
	void InfoEnter();
};
void stack::InfoEnter()
{
	ofstream Newfile;
	Newfile.open("NewFileaaa.txt", ios::out | ios::app);
	char str[10];
	cout << "Enter the array you desire.\n";
	cout << "Press 1 to stop entering info\n";
	for (;;)
	{
		cin.get(ch);
		Newfile << ch;
		Newfile.flush();
		if (ch == '1')
		{
			break;
		}
	}
	Newfile.close();
}
int main()
{
	stack obj1;
	obj1.InfoEnter();
	return 0;
}