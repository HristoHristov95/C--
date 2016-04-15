#include<stdio.h>
#define SIZE 1000
char pattern[] = "ould";
int getline(char s[], int size)
{
	int c, i=0;
	while (--size > 0 && (c = getchar()) != EOF && c != '\n')
	{
		s[i++] = c;
	}
	if (c == '\n')
	{
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}
int strindex(char s[], char t[])
{
	int i, j, k,need,flag=0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
		{
			;
		}
		if (k > 0 && t[k] == '\0')
		{
			need = j - 4;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return 1;
	}
	return need;
}
int main()
{
	int maxPosition=0,ret1;
	int returnedValue = 0;
	char str[SIZE];
	while ((ret1=getline(str, SIZE)) >0)
	{
		if ((returnedValue=strindex(str, pattern)))
		{
			if (maxPosition < returnedValue)
			{
				maxPosition = returnedValue;
				printf("The max Position is : %d \n", maxPosition);
			}
			if (returnedValue == -1)
			{
				printf("No match.\n");
			}
		}
	}
	return 0;
}