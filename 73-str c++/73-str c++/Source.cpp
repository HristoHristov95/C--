#include<iostream>
using namespace std;
class stack
{
	char *stck;
	int tos;
	char who;
public:
	stack(int a);
	~stack();
	void push(char ch);
	char pop();
};
stack::stack(int a)
{
	stck = (char*)malloc(a*sizeof(char));
	if (stck == NULL)
	{
		cout << "error allocation memory";
		return;
	}
}
stack::~stack()
{
	if (stck != NULL)
	{
		free(stck);
	}
}
int main1()
{
	stack s1(20);
	return 0;
}