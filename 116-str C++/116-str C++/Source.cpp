#include<iostream>
using namespace std;
class who
{
	char a;
public:
	who(char ch);
	~who();
};
who::who(char ch)
{
	a = ch;
	cout << "Constructing who #" << ch<<"\n";
}
who::~who()
{
	cout << "Destroying who #" << a<<"\n";
}
who make_who()
{
	who ook('a');
	return ook;
}
int main()
{
	who ob('l'), ob1('q'),ob2('s');
	ob2=make_who();
}