#include<iostream>
using namespace std;
class box{
	int a;
public:
	box(int b = 0){ a = b; }
	friend istream &operator>>(istream &stream, box &obj1);
	friend ostream &operator<<(ostream &ostream, box &obj1);
};
istream &operator>>(istream &stream, box &obj1)
{
	cout << "Please enter the side: ";
	stream >> obj1.a;
	return stream;
}
ostream &operator<<(ostream &stream, box &obj1)
{
	int height, base,stoinost;
	height = base = obj1.a;
	stoinost = base - 1;
	for (int i = base; i; i--)
	{
		if (i == base)
		{
			for (int m = base; m; m--)
			{
				stream << '*';
			}
		}
		else
		{
			stream << '\n';
			stream << '*';
			for (int k = base-2; k; k--)
			{
				stream << ' ';
			}
			stream << '*';
		}
		if (i == 2)
		{
			stream << '\n';
			for (int m = base; m; m--)
			{
				stream << '*';
			}
			break;
		}
	}
	stream << '\n';
	return stream;
}
int main()
{
	box obj1;
	cin >> obj1;
	cout << obj1;
	return 0;
}