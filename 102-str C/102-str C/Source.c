#include<stdio.h>
#include<ctype.h>
#define SIZE 10
/*char getint(int *pn)
{
	int c, sign;
	while (isspace(c = getch()))
	{
		;
	}
	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
	{
		return c;
	}
	for (*pn = 0; isdigit(c); c = getch())
	{
		*pn = 10 * *pn + (c - '0');
	}
	*pn *= sign;
	if (c != EOF)
	{
		ungetch(c);
	}
	return c;
}
int main1()
{
	char symbol;
	int array[SIZE], n;
	for (n = 0; (n < SIZE) && (symbol = getint(&array[n])) != EOF; n++)
	{
		;
	}
	printf("%c", symbol);
	return 0;
}*/