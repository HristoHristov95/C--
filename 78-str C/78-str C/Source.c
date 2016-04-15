#include<stdio.h>
#include<ctype.h>
double atof(char s[])
{
	double val, power;
	int i, sign,temp=0,sign1,flag1=0,count=0,delitel=1;
	for (i = 0; isspace(s[i]); i++)
	{
		;
	}
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
	{
		i++;
	}
	for (val = 0.0; isdigit(s[i]); i++)
	{
		val = 10.0*val + (s[i] - '0');
	}
	if (s[i] == '.')
	{
		i++;
	}
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0*val + (s[i] - '0');
		power *= 10;
	}
	if (s[i] == 'e' || s[i] == 'E')
	{
		i++;
		flag1 = 1;
	}
	if (flag1 == 1)
	{
		sign1 = (s[i] == '-') ? -1 : 1;
		i++;
		if (sign1 == -1)
		{
			count = s[i] - '0';
			for (int cout = count; cout > 0; cout--)
			{
				delitel = delitel * 10;
			}
			return (sign*val / power) / delitel;
		}
		else
		{
			count = s[i] - '0';
			for (int cout = count; cout > 0; cout--)
			{
				delitel = delitel * 10;
			}
			return (sign*val / power)*delitel;
		}
	}
	return sign*val / power;
}
	int main()
	{
		double sum=0;
		sum=atof("123.45e-6");
		printf("Sum: %e", sum);
		
		return 0;
	}