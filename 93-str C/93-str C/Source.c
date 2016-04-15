#include<stdio.h>
#include<string.h>
char * printd(int n,char s[],int *i)
{
	int sign;
	if ((sign = n) < 0)
	{
		n = -n;
	}
	if (n / 10)
	{
		s[(*i)++] = n % 10 + '0';
		printd(n / 10,s,i);
	}
	else
	{
		s[(*i)++] = n%10+'0';
	}
	if (sign < 0)
	{
		s[(*i)++] = '-';
	}
	s[(*i)] = '\0';
	return s;
}
int main1()
{
	char *ch;
	int i = 0;
	int x = 123;
	char s[10];
	ch= printd(x,s,&i);
	printf("%s\n", ch);
	return 0;
}