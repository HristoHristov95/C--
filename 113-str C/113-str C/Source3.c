#include<stdio.h>
void strcpy(char *s, char *t, int n)
{
	int i, j;
	i = j = 0;
	for (; (*s++ = *t++) != '\0' && i < n;i++)
	{
		;
	}
	*s = '\0';
}
int main()
{
	char a[10];
	char b[] = "Gaze$$";
	strcpy(a, b, 4);
	printf("%s\n", a);
	return 0;
}