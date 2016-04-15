#include<iostream>
using namespace std;
class pwr{
	int base;
	int exponent;
	double result;
public:
	pwr(int a = 0, int b = 0){ base = a; exponent = b; }
	void izchisleniq();
	friend ostream &operator<<(ostream &stream, pwr &obj1);
	friend istream &operator>>(istream &stream, pwr &obj1);
};
void pwr::izchisleniq()
{
	int e = exponent;
	result = 1;
	for (; e; e--) result = result *base;
}
ostream &operator<<(ostream &stream, pwr &obj1)
{
	stream << "The base is : " << obj1.base << " The exponent is : " << obj1.exponent << " The result is : " << obj1.result << '\n';
	return stream;
}
istream &operator>>(istream &stream, pwr &obj1)
{
	cout << "Please enter base : ";
	stream >> obj1.base;
	cout << '\n';
	cout << "Please enter exponent : ";
	stream >> obj1.exponent;
	cout << '\n';
	return stream;
}
int main6()
{
	pwr obj1;
	cin >> obj1;
	obj1.izchisleniq();
	cout << obj1;
	return 0;
}