#include<stdio.h>
#include<string.h>
char * reverse(char s[],int a,int b,int q)
{
	int c, i, j;
	c = a, i = b, j = q;
	c = s[i];
	s[i] = s[j];
	s[j] = c;
	i++;
	j--;
	if (i < j)
	{
		reverse(s, c, i, j);
	}
	return s;
}
int main3()
{
	char *ch;
	int a = 0, b = 0, c = 7;
	char s[] = "Aluakbar";
	ch=reverse(s,a,b,c);
	printf("%s", ch);
	return 0;
}