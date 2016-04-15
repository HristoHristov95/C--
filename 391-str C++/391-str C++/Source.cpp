#include<iostream>
#include<cstdlib>
using namespace std;
const int SIZE = 5;
template<class X1>class arraytype{
	X1 a[SIZE];
public:
	arraytype(){ int i;
	for (i = 0; i < SIZE; i++) a[i] = i;
	}
	X1 &operator[](int i);
};
template<class X1>X1 &arraytype<X1>::operator[](int i)
{
	if (i<0 || i>SIZE - 1){
		cout << "\nIndex value of ";
		cout << i << " is out-of-bounds.\n";
		exit(1);
	}
	return a[i];
}
int main1()
{
	arraytype<int> obj;
	int i;
	for (i = 0; i < SIZE; i++)
	{
		cout << obj[i] << " ";
	}
	obj[3] = 22;
	cout << obj[3] << '\n';
	obj[100] = 2;
	return 0;
}