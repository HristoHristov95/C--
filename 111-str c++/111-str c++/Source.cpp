#include<iostream>
using namespace std;
#define size 10
class stack
{
	char stck[size];
	int tos;
public:
	stack(){ cout << "Constructing stack\n"; tos = 0; }
	void push(char ch);
	char pop();
	void rewind(){ tos = 3; }
};
void stack::push(char ch)
{
	if (tos == size)
	{
		cout << "stack is full\n";
		return;
	}
	stck[tos] = ch;
	tos++;
}
char stack::pop()
{
	if (tos == 0)
	{
		cout << "Stack is empty";
		return 0;
	}
	tos--;
	return stck[tos];
}
void showstack(stack *a, stack *b)
{
	a->rewind();
	b->rewind();
	for (int i = 0; i < 3; i++)
	{
		cout << "Pop a : " << a->pop() << "\n";
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Pop b : " << b->pop() << "\n";
	}
}
int main1()
{
	stack s1, s2;
	int i;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s2 = s1;
	for (i = 0; i < 3; i++)
		cout << "Pop s1: " << s1.pop() << "\n";
	for (i = 0; i < 3; i++)
		cout << "Pop s1: " << s2.pop() << "\n";
	showstack(&s1, &s2);
	return 0;
}