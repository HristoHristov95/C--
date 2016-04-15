#include<stdio.h>
int strend(char *s, char *t)
{
	int i, j,lenght,count=0;
	char *p;
	i = j = 0;
	p = t;
	while (*s++ != '\0')
	{
		;
	}
	while (*t++ != '\0')
	{
		;
	}
	lenght = t - p;
	while (*s-- == *t--)
	{
		if (count == lenght)
		{
			return 1;
		}
		count++;
	}
	return 0;
}
int main2()
{
	char a[] = "GG madafaka";
	char b[] = "madafaka";
	int returnedValue=-1;
	returnedValue = strend(a, b);
	if (returnedValue == 1)
	{
		printf("string B is in the end of string A .\n");
	}
	if (returnedValue==0)
	{
		printf("String B is not in the end of string A .\n");
	}
	return 0;
}