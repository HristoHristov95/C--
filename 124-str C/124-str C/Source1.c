#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main2(int argc, char *argv[])
{
	int n;
	char *temp;
	while (--argc > 0)
	{
		temp = &*argv[argc];
		if (isdigit(temp[0]))
		{
			n = atoi(argv[argc]);
			for (int i = 0; i < n; i++)
			{
				printf(" ");
			}
			temp = NULL;
		}
		else if ((strcmp(argv[argc], "	"))==0)
		{
			printf("  ");
		}
		else
		{
			printf("%s", argv[argc]);
		}
	}
	printf("\n");
	return 0;
}