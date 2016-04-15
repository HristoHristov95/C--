#include<stdio.h>
#include<string.h>
#define MAXLINES 5000
#define MAXLEN 1000
char *lineptr[MAXLINES];
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);
int getline(char *, int);
int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
int readlines(char *lineptr[], int maxlines,char *p)
{
	int len, nlines,count=0;
	char line[MAXLEN];
	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0)
	{
		if (nlines >= maxlines)
			return -1;
		else
		{
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
		if (count == 2)
		{
			break;
		}
		++count;
	}
	return nlines;
}
void writelines(char *lineptr[], int nlines)
{
	while (nlines-->0)
	{
		printf("%s\n", *lineptr++);
	}
}
void swap(char *v[], int i, int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
void qsort(char *v[], int left, int right)
{
	int i, last;
	if (left >= right)
	{
		return;
	}
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
	{
		if (strcmp(v[i], v[left]) < 0)
		{
			swap(v, ++last, i);
		}
	}
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}
int main()
{
	int nlines;
	char wer[1000];
	if ((nlines = readlines(lineptr, MAXLINES,wer)) >= 0){
		qsort(lineptr, 0, nlines - 1); //do tuk programata raboti NO QSORT NE RABOTI FUNKCIQTA !!!
		writelines(lineptr, nlines);
		return 0;
	}
	else
	{
		printf("Error: input too big to sort.\n");
		return 1;
	}
	return 0;
}