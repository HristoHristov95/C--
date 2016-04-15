#include<iostream>
using namespace std;
class info
{
	char ime[20];
	char adress[20];
public:
 	void store();
	void display();
};
void info::store()
{
	cout << "Please enter name : "<<"\n";
	cin >> ime;
	cout << "Please enter adress : " << "\n";
	cin >> adress;
}
void info::display()
{
	cout << "The name is : " << ime<<"\n";
	cout << "The adress is : " << adress<<"\n";
}
int main2()
{
	class info sur;
	sur.store();
	sur.display();
	return 0;
}