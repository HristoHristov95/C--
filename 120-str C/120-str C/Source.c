#include<stdio.h>
void day_of_year(char **daytab,int *year, int *month, int *day)
{
	int i, leap;
	leap = (*year) % 4 == 0 && (*year) % 100 != 0 || (*year) % 400 == 0;
	for (i = 1; i < (*month); i++)
	{
		(*day) += daytab[leap][i];
	}
}
void month_day(char **daytab,int *year, int *yearday, int *pmonth)
{
	int i, leap;
	leap = (*year) % 4 == 0 && (*year) % 100 != 0 || (*year) % 400 == 0;
	for (i = 1; (*yearday)>daytab[leap][i]; i++)
	{
		(*yearday) -= daytab[leap][i];
	}
	*pmonth = i;
}
int main1()
{
	char daytab1[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char daytab2[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char *pointers[2];
	int year = 3,month=6,day=0,yearday=600,pmonth;
	pointers[0] = daytab1;
	pointers[1] = daytab2;
	day_of_year(&pointers ,&year, &month, &day);
	printf("%d\n\n", day);
	month_day(&pointers ,&year, &yearday, &pmonth);
	printf("%d %d\n", yearday, pmonth);
	return 0;
}
