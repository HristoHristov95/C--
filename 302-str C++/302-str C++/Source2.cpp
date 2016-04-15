#include<iostream>
using namespace std;
class date{
	char d[9];
public:
	friend ostream &operator<<(ostream &stream, date &obj);
	friend istream &operator>>(istream &stream, date &obj);
};
ostream &operator<<(ostream &stream, date &obj)
{
	stream << "The entered information is : " <<obj.d<< '\n';
	return stream;
}
istream &operator>>(istream &stream, date &obj)
{
	cout << "Please enter information : " << '\n';
	stream >> obj.d;
	return stream;
}
int main()
{
	date obj;
	cin >> obj;
	cout << obj;
	return 0;
}