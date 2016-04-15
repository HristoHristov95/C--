#include<iostream>
using namespace std;
class card
{
	char ime[10];
	char avtor[20];
	int broi;
public:
	void store();
	void show();
};
void card::store()
{
	cout << "Please enter name of book: ";
	cin >> ime;
	cout << "Please enter authors name : ";
	cin >> avtor;
	cout << "Please enter number of books you have in store : ";
	cin >> broi;
}
void card::show()
{
	cout << "The name of the book is : " << ime<<"\n";
	cout << "The authors name is : " << avtor<<"\n";
	cout << "The number of books in store is : " << broi<<"\n";
}
int main2()
{
	class card s1;
	s1.store();
	s1.show();
	return 0;
}