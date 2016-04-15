#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXLINES 5000
#define ALLOCSIZE 10000
#define MAXLEN 1000
char *lineptr[MAXLINES];
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(void *lineptr[], int left, int right, int(*comp)(void *, void *));
void qsortt(void *lineptr[], int left, int right, int(*comp)(void *, void *));
int numcmp(char *, char *);
int strcmp(char *s, char *t);
char *alloc(int n);
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
int main(int argc, char *argv[])
{
	int nlines;
	int numeric = 0,flagR=0;
	if (argc > 1 && strcmp(argv[1], "-n") == 0)
	{
		numeric = 1;
	}
	if (argc > 1 && strcmp(argv[2], "-r") == 0)
	{
		flagR = 1;
	}
	if (flagR == 0)
	{
		if ((nlines = readlines(lineptr, MAXLINES)) > 0){
			qsort((void**)lineptr, 0, nlines - 1, (int(*)(void *, void *)) (numeric ? numcmp : strcmp));
			writelines(lineptr, nlines);
			return 0;
		}
		else
		{
			printf("input too big to sort\n");
			return 1;
		}
	}
	else
	{
		if ((nlines = readlines(lineptr, MAXLINES)) > 0){
			qsortt((void**)lineptr, 0, nlines - 1, (int(*)(void *, void *)) (numeric ? numcmp : strcmp));
			writelines(lineptr, nlines);
			return 0;
		}
		else
		{
			printf("input too big to sort\n");
			return 1;
		}
	}
	return 0;
}
int strcmp(char *s, char *t)
{
	int lower1 = 0, lower2 = 0;
	for (; *s == *t; s++, t++)
	{
		if (*s == '\0')
		{
			return 0;
		}
	}
	if (isupper(*s)||isupper(*t))
	{
		lower1= tolower(*s);
		lower2= tolower(*t);
		return lower1 - lower2;
	}
	return *s - *t;
}
void qsortt(void *v[], int left, int right, int(*comp)(void *, void *))
{
	{
		int i, last;
		void swap(void *v[], int, int);
		if (left >= right)
		{
			return;
		}
		swap(v, left, (left + right) / 2);
		last = left;
		for (i = left + 1; i <= right; i++)
		{
			if ((*comp)(v[i], v[left]) > 0)
			{
				swap(v, ++last, i);
			}
		}
		swap(v, left, last);
		qsortt(v, left, last - 1, comp);
		qsortt(v, last + 1, right, comp);
	}
}
void qsort(void *v[], int left, int right, int(*comp)(void *, void *))
{
	int i, last;
	void swap(void *v[], int, int);
	if (left >= right)
	{
		return;
	}
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
	{
		if ((*comp)(v[i], v[left]) < 0)
		{
			swap(v, ++last, i);
		}
	}
	swap(v, left, last);
	qsort(v, left, last - 1, comp);
	qsort(v, last + 1, right, comp);
}
int getline(char s[], int lim)
{
	int c, i;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
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
int numcmp(char *s1, char *s2)
{
	double v1, v2;
	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
	{
		return -1;
	}
	else if (v1>v2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void swap(void *v[], int i, int j)
{
	void *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n)
	{
		allocp += n;
		return allocp - n;
	}
	else
	{
		return 0;
	}
}
int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0)
	{
		if ((nlines >= maxlines) || ((p=alloc(len))==NULL))
		{
			return -1;
		}
		else
		{
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}
void writelines(char *lineptr[], int nlines)
{
	int i;
	for (i = 0; i < nlines; i++)
	{
		printf("%s \n", lineptr[i]);
	}
}