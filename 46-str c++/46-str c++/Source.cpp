#include<iostream>
using namespace std;
#define size 10
class stack
{
	char stck [size];
	int toss;
public:
	void init();
	void push(char ch);
	char pop();
};
void stack::init()
{
	toss = 0;
}
void stack::push(char ch)
{
	if (toss == size)
	{
		cout << "stack is full";
		return ;
	}
	stck[toss] = ch;
	toss++;
}
char stack::pop()
{
	if (toss == 0)
	{
		cout << "stack is empty";
		return 0;
	}
	toss--;
	return stck[toss];
}
int main1()
{
	stack s1, s2;
	int i;
	s1.init();
	s2.init();
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for (i = 0; i < 3; i++)
		cout << "pop s1:" << s1.pop() << "\n";
	for (i = 0; i < 3; i++)
		cout << "Pop s2: " << s2.pop() << "\n";
	return 0;
}