#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
int sp = 0;
double val[MAXVAL];
void push(double f,int *a)
{
	if (sp < MAXVAL)
	{
		if (*a == 1)
		{
			f = -f;
			*a = 0;
		}
		val[sp++] = f;
	}
	else
	{
		printf("error: stack full, deleting elements.");
		for (int i = 0; i < MAXVAL; i++)
		{
			val[i] = '\0';
			sp = 0;
		}
	}
}
int pop(void)
{
	if (sp > 0)
	{
		return val[--sp];
	}
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}
int getop(char s[], int *flag,char *ch,int *flag1,int *flag2,int *ch1,int *specialflag,int *temp)
{
	int i=0, c;
	if (*flag1 == 1 && *flag2 == 1)
	{
		*flag1 = *flag2 = 0;
		return *ch;
	}
	if (*flag1 == 1 && *flag2 == 0)
	{
		*flag2 = 1;
	}
	if (*flag1 == 0 && *flag2 == 0 && *specialflag == 1)
	{
		*specialflag = 0;
		return *ch1;
	}
	if (*temp != 0)
	{
		return *temp;
	}
	c = getch();
	if ((c != '+')  && (c != '-') && (c!='/') &&(c !='*'))
	{
		if (c == '=')
		{
			printf("%c", c);
		}
		ungetch(c);
		while ((s[0] = c = getch()) == ' ' || c == '\t')
		{
			;
		}
		if (s[0] == '-')
		{
			*flag = 1;
			c = '\0';
		}
		s[1] = '\0';
		if (!isdigit(c) && c != '.')
		{
			return c;
		}
		i = 0;
		if (isdigit(c))
		{
			printf("%c", c);
			while (isdigit(s[++i] = c = getch()))
			{
				printf("%c", c);
			}
		}
		if (c == '.')
		{
			while (isdigit(s[++i] = c = getch()))
			{
				;
			}
		}
		s[i] = '\0';
		if (c != EOF && *flag1 == 0)
		{
			printf("%c", c);
			*ch = c;
			*flag1 = 1;
		}
		if (*flag1 == 1 && *flag2 == 1)
		{
			printf("%c", c);
			*ch1 = c;
			*specialflag = 1;
		}
		return NUMBER;
	}
	else
	{
		printf("%c", c);
		*temp = c;
		c = '\0';
			while (isdigit(c = getch()))
			{
				printf("%c", c);
				s[i++] = c;
			}
			return NUMBER;
	}
}
int main(void)
{
	int type, op = 0, op1 = 0, op3 = 0, op4, op5=0;
	char c,c1;
	double op2;
	char s[MAXOP];
	while ((type = getop(s,&op,&c,&op1,&op3,&c1,&op4,&op5)) != EOF)
	{
		switch (type)
		{
		case NUMBER:
			push(atof(s),&op);
			break;
		case '+':
			push(pop() + pop(),&op);
			op5 = 0;
			break;
		case '*':
			push(pop()*pop(),&op);
			op5 = 0;
			break;
		case '-':
			op2 = pop();
			push(pop() - op2,&op);
			op5 = 0;
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
			{
				push(pop() / op2,&op);
				op5 = 0;
			}
			else
			{
				printf("error: zero division\n");
			}
			break;
		case '%':
			push(pop() % pop(),&op);
			op5 = 0;
			break;
		case '=':
			printf("\t%d\n", pop());
			sp ++;
			val[sp] = 0;
			op5 = 0;
			break;
		default:
			printf("Error : unknown command %s \n", s);
			break;
		}
	}
	return 0;
}