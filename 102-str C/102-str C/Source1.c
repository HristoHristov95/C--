#include<stdio.h>
#include<ctype.h>
#define SIZE 3
float getint(float *pn)
{
	int c, sign;
	float temp = 1.0;
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
	if (c == '.')
	{
		c = getch();
		for (temp = 1.0; isdigit(c); c = getch())
		{
			*pn = 10 * *pn + (c - '0');
			temp *= 10;
		}
	}
	*pn = sign*(*pn) / temp;
	if (c != EOF)
	{
		ungetch(c);
	}
	return c;
}
int main2()
{
	char symbol;
	float array[SIZE];
	int n;
	for (n = 0; (n < SIZE) && (symbol = getint(&array[n])) != EOF; n++)
	{
		;
	}
	printf("%f",array[0]);
	return 0;
}