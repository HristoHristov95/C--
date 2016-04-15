#include<iostream>
#include<Windows.h>
using namespace std;
void sleepa(int a)
{
	unsigned long b = a;
	Sleep(5000);
}
int main()
{
	sleepa(10);
	return 0;
}