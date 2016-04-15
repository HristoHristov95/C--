#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct words{
	int line[100];
	char word[25];
	int cc;
	struct words *next;
};
int findword(char s[], struct words *a)
{
	int checker = 1,flag=0,flag1=0;
	while (a != NULL)
	{
		checker = strcmp(a->word, s);
		if (checker == 0)
		{
			flag = 1;
		}
		else
		{
			flag1 = 1;
		}
		a = a->next;
	}
	if (flag == 1)
	{
		return 1;
	}
	if (flag1 == 1)
	{
		return 0;
	}
	if (a == NULL)
	{
		return 0;
	}
}
int findworda(char s[],struct words *a,int countera)
{
	int aaa = 1;
	while (a != NULL)
	{
		aaa = strcmp(a->word, s);
		if (aaa == 0)
		{
			a->line[a->cc++] = countera;
			break;
		}
		a = a->next;
	}
}
struct words *getword(FILE **fp)
{
	struct words *new=NULL,*past=NULL;
	char c,worda[25];
	int i=0,counter=0,counter1=0,checker=-1;
	while ((c = getc(*fp)) != EOF)
	{
		if (c == '\n')
		{
			counter++;
			continue;
		}
		if (c != ' ' && c != '\n')
		{
			worda[i++] = c;
		}
		if (c == ' ')
		{
			worda[i] = '\0';
			checker = findword(worda,past);
			if (checker == 1)
			{
				findworda(worda,past,counter);
				checker = -1;
				for (int k = 0; k < 25; k++)
				{
					worda[k] = '\0';
				}
				i = 0;
			}
			if (checker==0)
			{
				new = (struct words*)malloc(sizeof(struct words));
				new->cc = 0;
				strcpy(new->word, worda);
				new->line[0] = counter;
				new->cc++;
				if (!past)
				{
					past = new;
					new->next = NULL;
				}
				else
				{
					new->next = past;
					past = new;
				}
				for (int k = 0; k < 25; k++)
				{
					worda[k] = '\0';
				}
				i = 0;
				checker = -1;
			}
		}
	}
	return new;
}
int main()
{
	struct words *object,*p;
	FILE *fp;
	char name[20];
	printf("Please enter name of document.\n");
	scanf("%s", name);
	fp = fopen(name, "r");
	if (!fp)
	{
		printf("Error opening file .\n");
	}
	else
	{
		object=getword(&fp);
	}
	while (object != NULL)
	{
		printf("The word is : %s\n", object->word);
		printf("Encounter on lines : ");
		for (int i = 0; i < object->cc; i++)
		{
			printf("%d ", object->line[i]);
		}
		printf("\n");
		p = object;
		object = object->next;
		free(p);
	}
	fclose(fp);
	return 0;
}