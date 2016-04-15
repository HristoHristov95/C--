#include<iostream>
#include<new>
using namespace std;
int main2()
{
	int *p;
	//versiq v1.0
	/*p = new(nothrow) int;

	if (!p)
	{
		cout << "Allocating memory error.\n";
		exit(1);
	}*/
	//versiq v1.1
	try{
		p = new int;
	}
	catch (bad_alloc memory){
		cout << "Allocating memory failure.\n";
		return 1;
	}
	return 0;
}