#include<iostream>
using namespace std;
//primer #1
/*
void Xhandler(int test)
{
	try{
		if (test == 0)throw test;
		if (test == 1)throw 'a';
		if (test == 2)throw 123.23;
	}
	catch (...){
		cout << "Cought one!\n";
	}
}
int main()
{
	cout << "Start\n";
	Xhandler(0);
	Xhandler(1);
	Xhandler(2);
	cout << "End\n";
	return 0;
}*/
//primer #2
/*void Xhandler(int test)
{
	try{
		if (test == 0)throw test;
		if (test == 1)throw 'a';
		if (test == 2)throw 123.23;
	}
	catch (int i)
	{
		cout << "Caught " << i << '\n';
	}
	catch (...){
		cout << "Caught one \n";
	}
}
int main()
{
	cout << "Start\n";
	Xhandler(0);
	Xhandler(1);
	Xhandler(2);
	cout << "End\n";
	return 0;
}*/
//primer #3
/*void Xhandler(int test) throw(int,char,double)
{
		if (test == 0)throw test;
		if (test == 1)throw 'a';
		if (test == 2)throw 123.23;
}
int main()
{
	try{
		Xhandler(3);
	}
	catch (int i){
		cout << "Caught int\n";
	}
	catch (char c){
		cout << "Cought char\n";
	}
	catch (double d){
		cout << "Caught double\n";
	}
	cout << "End\n";
	return 0;
}*/
//primer #4
void Xhandler()
{
	try{
		throw "Hello";
	}
	catch (char *){
		cout << "Caught char * inside Xhandler\n";
		throw;
	}
}

int main1()
{
	cout << "Start\n";
	try{
		Xhandler();
	}
	catch (char*)
	{
		cout << "Caught char * inside main\n";
	}
	cout << "end\n";
	return 0;
}