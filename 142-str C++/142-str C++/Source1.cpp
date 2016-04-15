#include<iostream>
using namespace std;
class person
{
	char name[20];
	char number[20];
public:
	void get_info();
};
void person::get_info()
{
	cout << "Please enter information about name : \n";
	cin >> name;
	cout << "Please enter information about phone number : \n";
	cin >> number;
}
int main()
{
	person *ob;
	ob = new person;
	ob->get_info();
	return 0;
}