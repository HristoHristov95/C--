#include<iostream>
using namespace std;
//primer #1
/*int main()
{
	cout << "Starting: \n";
	try{
		cout << "Inside try block\n";
		throw 10;
		cout << "This will not execute";
	}
	catch(int i){
		cout << "Caught one #: " << i << '\n';
	}
	cout << "End\n";
	return 0;
}*/
//primer #2
/*int main()
{
	cout << "start\n";
	try{
		cout << "Inside try block\n";
		throw 10;
		cout << "This will not execute";
	}
	catch (double i){
		cout << "Cought one #: " << i << '\n';
	}
	cout << "End\n";
	return 0;
}*/
//peimwe #3
/*void Xtest(int test)
{
	cout << "Inside Xtest test is : " << test << '\n';
	if (test)
	{
		throw test;
	}
}
int main()
{
	cout << "start\n";
	try{
		cout << "Inside try block\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch (int i){
		cout << "Cought one #: " << i << '\n';
	}
	cout << "End\n";
	return 0;
}*/
//primet #4
/*
void Xtest(int test)
{
	try{
		if (test)
		{
			throw test;
		}
	}
	catch (int i){
		cout << "Caught one #: " << i << '\n';
	}
}
int main()
{
	cout << "start\n";

	Xtest(1);
	Xtest(2);
	Xtest(0);
	Xtest(3);

	cout << "End\n";
	return 0;
}*/
//primer #5
void Xtest(int test)
{
	try{
		if (test)
		{
			throw test;
		}
		else
		{
			throw "Value is zero";
		}
	}
	catch (int i){
		cout << "Caught one #: " << i << '\n';
	}
	catch (char *s)
	{
		cout << "Cought an array :" << s << '\n';
	}
}
int main()
{
	cout << "start\n";

	Xtest(1);
	Xtest(2);
	Xtest(0);
	Xtest(3);

	cout << "End\n";
	return 0;
}
