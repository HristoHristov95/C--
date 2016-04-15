#include<iostream>
using namespace std;
#define SIZE 10
class stack{
	char stck[SIZE];
	int tos;
public:
	stack();
	void push(char ch);
	char pop();
	friend ostream &operator<<(ostream &stream, stack &obj1);
};
ostream &operator<<(ostream &stream, stack &obj1)
{
		stream << "Here is the string : " << obj1.stck;
	stream << '\n';
	return stream;
}
stack::stack()
{
	tos = 0;
}
void stack::push(char ch)
{
	if (tos == SIZE)
	{
		cout << "Stack is full\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}
char stack::pop()
{
	if (tos == 0)
	{
		cout << "Stack is empty\n";
		return 0;
	}
	tos--;
	return stck[tos];
}
int main1()
{
	stack obj;
	obj.push('a');
	obj.push('b');
	obj.push('c');
	obj.push('\0');
	cout << obj;
	return 0;
}