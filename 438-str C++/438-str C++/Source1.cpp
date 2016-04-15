#include<iostream>
using namespace std;
class A{
	static int number_Of_Objects;
	int num;
public:
	A(int x){ cout << "Constructing.\n"; num = x; number_Of_Objects++; }
	~A(){ cout << "Destructing\n"; number_Of_Objects--; }
	int show(){ return number_Of_Objects; }
};
int A::number_Of_Objects = 0;
int main()
{
	A ob[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "Number of objects: " << ob[1].show()<<endl;
	return 0;
}