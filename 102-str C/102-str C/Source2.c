#include<stdio.h>
void al(int pr[])
{
	pr[1] = 5;
	pr[2] = 111;
}
int main3()
{
	int *temp;
	int a[] = { 0, 0, 0 };
	al(a);
	temp = a;
	temp[0] = 123;
	printf("%d\n", a[2]);
	printf("%d\n", a[1]);
	printf("%d\n", a[0]);
	return 0;
}