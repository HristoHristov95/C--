#include<iostream>
using namespace std;
class number1{
	int number;
	int nokpp;
public:
	number1(){ number = 0; nokpp = 0; }
	friend ostream &operator<<(ostream &stream, number1 &obj1);
	friend istream &operator>>(istream &stream, number1 &obj);
	void nokp(number1 &obj);
};
void number1::nokp(number1 &obj1)
{
	int i = 2;
	for (;;)
	{
		if ((obj1.number%i) == 0)
		{
			obj1.nokpp = i;
			break;
		}
		else
		{
			i++;
		}
	}
}
ostream &operator<<(ostream &stream, number1 &obj1)
{
	stream << "The number is : " << obj1.number << ' ' << "And the delitel is :" << obj1.nokpp << "\n";
	return stream;
}
istream &operator>>(istream &stream, number1 &obj)
{
	cout << "Please enter number: ";
	stream >> obj.number;
	return stream;
}
int main1()
{
	number1 ob, ob1;
	cin >> ob;
	ob.nokp(ob);
	cout << ob;
	return 0;
}