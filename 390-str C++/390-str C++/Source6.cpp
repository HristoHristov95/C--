#include<iostream>
using namespace std;
#define size 2
template<class X1, class X2>class stack{
	X1 stackk[size];
	X2 stck[size];
	int tos;
public:
	stack(){ tos = 0; }
	void push(X1 a, X2 b);
	void pop(X1 &a, X2 &b);
};

template<class X1, class X2>void stack<X1, X2>::push(X1 a, X2 b) throw(int)
{
		if (tos == 2)
		{
			throw 2;
		}
		stackk[tos] = a;
		stck[tos] = b;
		tos++;
}
template<class X1, class X2>void stack<X1, X2>::pop(X1 &a, X2 &b) throw(int)
{
		if (tos == 0)
		{
			throw 1;
		}
		tos--;
		a = stackk[tos];
		b = stck[tos];
}
int main()
{
	int number;
	char alphabet;
	stack<int, char> obj1;
	try{
		obj1.push(12, 'a');
		obj1.push(11, 'z');
		obj1.push(10, 'x');
		obj1.push(12, 's');
	}
	catch (int a)
	{
		cout << "Exceeding boundaries.\n";
	}
	obj1.pop(number, alphabet);
	cout << "Here they are : " << number << ' ' << alphabet << '\n';
	obj1.pop(number, alphabet);
	cout << "Here they are : " << number << ' ' << alphabet << '\n';
	obj1.pop(number, alphabet);
	cout << "Here they are : " << number << ' ' << alphabet << '\n';
	return 0;
}