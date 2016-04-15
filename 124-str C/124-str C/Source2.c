#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main3(int argc,char *argv[])
{
	int m=0,m1=0,flag=0;
	char *p;
	while (argc-- > 0)
	{
		if (strcmp(argv[1], "entab") == 0)
		{
			p = &*argv[argc];
			if (flag == 1)
			{
				m = m - atoi(p);
				for (int i = 0; i < m; i++)
				{
					printf("	");
				}
				p = NULL;
				flag = 0;
				continue;
			}
			if (flag == 0)
			{
				if (isdigit(p[0]))
				{
					flag = 1;
					m = atoi(p);
				}
			}
		}
	}
	return 0;
}