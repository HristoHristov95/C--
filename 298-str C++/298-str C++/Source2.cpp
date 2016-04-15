#include<iostream>
using namespace std;
class ft_to_incher{
	double feet;
	double inches;
public:
	void set(){
		inches = feet * 12;
	}
	friend ostream &operator<<(ostream &stream, ft_to_incher &obj1);
	friend istream &operator>>(istream &stream, ft_to_incher &obj1);
};
ostream &operator<<(ostream &stream, ft_to_incher &obj)
{
	stream << "The number of feet you entered is : " << obj.feet<<'\n';
	stream << "And the number of inches is : " << obj.inches << '\n';
	return stream;
}
istream &operator>>(istream &stream, ft_to_incher &obj)
{
	cout << "Please enter feet: ";
	cin >> obj.feet;
	cout << "\n";
	return stream;
}
int main()
{
	ft_to_incher ob;
	cin >> ob;
	ob.set();
	cout << ob;
	return 0;
}