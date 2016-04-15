#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main1(int argc,char *argv[])
{
	int result=0;
	int a1, a2, a3;
	if (argc != 6)
	{
		printf("Not enough arguments.\n");
	}
	else
	{
			a1 = atoi(argv[1]);
			a2 = atoi(argv[2]);
			a3 = atoi(argv[3]);
			if (strcmp(argv[4],"+")==0)
			{

				if (strcmp(argv[5], "+") == 0)
				{
					result = a1 + a2 + a3;
				}
				if (strcmp(argv[5], "-") == 0)
				{
					result = a2 + a3 - a1;
				}
				if (strcmp(argv[5], "/") == 0)
				{
					result = (a2 + a3) / a1;
				}
				if (strcmp(argv[5], "*") == 0)
				{
					result = (a2 + a3)*a1;
				}
			}
			if (strcmp(argv[4], "-") == 0)
			{

				if (strcmp(argv[5], "+") == 0)
				{
					result = a1 - a2 + a3;
				}
				if (strcmp(argv[5], "-") == 0)
				{
					result = (a2 - a3) - a1;
				}
				if (strcmp(argv[5], "/") == 0)
				{
					result = (a2 - a3) / a1;
				}
				if (strcmp(argv[5], "*") == 0)
				{
					result = (a2 - a3) * a1;
				}
			}
			if (strcmp(argv[4], "/") == 0)
			{

				if (strcmp(argv[5], "+") == 0)
				{
					result = (a2 / a3) + a1;
				}
				if (strcmp(argv[5], "-") == 0)
				{
					result = (a2 / a3) - a1;
				}
				if (strcmp(argv[5], "/") == 0)
				{
					result = (a2 / a3) / a1;
				}
				if (strcmp(argv[5], "*") == 0)
				{
					result = (a2 / a3) * a1;
				}
			}
			if (strcmp(argv[4], "*") == 0)
			{
				if (strcmp(argv[5], "+") == 0)
				{
					result = (a2 * a3) + a1;
				}
				if (strcmp(argv[5], "-") == 0)
				{
					result = (a2 * a3) - a1;
				}
				if (strcmp(argv[5], "/") == 0)
				{
					result = (a2 * a3) / a1;
				}
				if (strcmp(argv[5], "*") == 0)
				{
					result = (a2 * a3) * a1;
				}
			}
	}
	printf("Result: %d \n", result);
	return 0;
}