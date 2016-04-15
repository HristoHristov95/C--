#include<iostream>
using namespace std;
class prompt
{
	int count;
public:
	prompt(char *str);
	~prompt();
};
prompt::prompt(char *str)
{
	cout << str<<"\n";
	cout << "Please enter a number : ";
	cin >> count;
	cout << "\n";
}
prompt::~prompt()
{
	for (int i = 0; i < count; i++)
	{
		cout << "\a";
	}
}
int main3()
{
	prompt ab("Kur za levski");
	return 0;
}