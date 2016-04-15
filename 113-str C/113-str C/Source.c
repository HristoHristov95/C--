#include<stdio.h>
void strcat(char *s, char *t)
{
	int i, j;
	i = j = 0;
	while (*s++ != '\0')
	{
		;
	}
	*s--;
	while ((*s++ = *t++) != '\0')
	{
		;
	}
}
int main1()
{
	char a[11] = "GG";
	char b[] = "Madafaka";
	strcat(a, b);
	printf("%s\n", a);
	return 0;
}