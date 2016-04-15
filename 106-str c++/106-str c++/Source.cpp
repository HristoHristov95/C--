#include<iostream>
using namespace std;
class queue
{
	int a;
	int b;
public:
	queue(){ a = b; }
	void show();
};
void queue::show()
{
	a = 10;
	cout << "Value : " << a<<"\n";
}
int main()
{
	queue ob1[10], ob2[10];
	ob1[1].show();
	ob2[3] = ob1[1];
	ob2[3].show();
	return 0;
}