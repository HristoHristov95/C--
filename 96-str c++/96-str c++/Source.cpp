#include<iostream>
using namespace std;
class line
{
	int len;
public:
	line(int a);
	~line();
};
line::line(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << "_";
	}
}
line::~line()
{
	system("CLS");
}
int main1()
{
	int lenght = 0;
	cout << "Please enter the lenght of the line you want to see : ";
	cin >> lenght;
	line a1(lenght);
	return 0;
}