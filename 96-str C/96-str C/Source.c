#include<stdio.h>
#define swap(t,x,y) (t=y, y=x, x=t)
int main()
{
	int a = 0, b = 2, c = 3;
	swap(a, b, c);
	printf("B=%d,C=%d",b, c);
	return 0;
}