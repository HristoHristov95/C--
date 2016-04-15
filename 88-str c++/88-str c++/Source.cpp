#include<iostream>
using namespace std;
#define size 10
struct stack
{
	stack();
	void push(char ch);
	char pop();
private:
	char stck[size];
	int tos;
};
stack::stack()
{
	tos = 0;
}
void stack::push(char ch)
{
	if (tos == size)
	{
		cout << "The stack is full";
		return;
	}
	stck[tos] = ch;
	tos++;
}
char stack::pop()
{
	if (tos == 0)
	{
		cout << "stack is empty";
			return 0;
	}
	tos--;
	return stck[tos];
}
int main1()
{
	stack s1, s2;
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for (int i = 0; i < 3; i++)
		cout << "Pop s1:" << s1.pop() << "\n";
	for (int i = 0; i < 3; i++)
		cout << "Pop s2: " << s2.pop() << "\n";
	return 0;
}