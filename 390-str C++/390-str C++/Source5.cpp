#include<iostream>
using namespace std;
#define size 10
template<class X1, class X2>class stack{
	X1 stackk[size];
	X2 stck[size];
	int tos;
public:
	stack(){ tos = 0; }
	void push(X1 a, X2 b);
	void pop(X1 &a, X2 &b);
};

template<class X1, class X2>void stack<X1, X2>::push(X1 a,X2 b)
{
	if (tos == size){
		cout << "Stack is full.\n";
		return;
	}
	stackk[tos] = a;
	stck[tos] = b;
	tos++;
}
template<class X1, class X2>void stack<X1, X2>::pop(X1 &a, X2 &b)
{
	if (tos == 0)
	{
		cout << "Stack is emprty.\n";
		return ;
	}
	tos--;
	a = stackk[tos];
	b = stck[tos];
}
int main6()
{
	int number;
	char alphabet;
	stack<int, char> obj1;
	obj1.push(12, 'a');
	obj1.push(11, 'z');
	obj1.push(10, 'x');
	obj1.pop(number, alphabet);
	cout << "Here they are : " << number << ' ' << alphabet << '\n';
	obj1.pop(number, alphabet);
	cout << "Here they are : " << number << ' ' << alphabet << '\n';
	obj1.pop(number, alphabet);
	cout << "Here they are : " << number << ' ' << alphabet << '\n';
	return 0;
}