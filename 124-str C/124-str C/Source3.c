#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void tail(char **arg)
{
	char string[100],c,*p;
	int i = 0, stoinost = 0;
	int k = 0;
	if (strcmp(*arg, "tail"))
	{
		printf("Enter string: \n");
		while ((c = getchar()) != EOF)
		{
			string[i++] = c;
		}
		string[i] = '\0';
	}
	p = &*arg[2];
	if (isdigit(p[1]))
	{
		stoinost = p[1] - '0';
		for (i = 0;(string[i] != '\0') && (i<stoinost); i++)
		{
			for (;;)
			{
				printf("%c", string[k]);
				if ((string[k] == '\n') || (string[k] =='\0'))
				{
					break;
				}
				k++;
			}
			i = k;
		}
	}
	else
	{
		for (i = 0; i<10; i++)
		{
			for (;;)
			{
				printf("%c", string[k++]);
				if (string[k] == '\n')
				{
					break;
				}
			}
		}
	}
}
int main(int argc,char *argv[])
{
		if (argc > 1)
		{
			tail(argv);
		}
		else
		{
			printf("Please restart\n");
			exit(1);
		}
	return 0;
}