#include<stdio.h>
void get(int **here)
{
	int *p;
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", (**here)++);
	}
	printf("%d\n\n\n", here[1][1]);
	p = &*here[1];
	for (int i = 0; i < 3; i++)
	{
		printf("%d", p[i]);
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d", (*here)[i]);
	}
	printf("\n\n");
}
int main()
{
	int a[] = { 1, 2, 3 };
	int b[] = { 4, 5, 6 };
	int *c[2];
	c[0] = a;
	c[1] = b;
	get(&c);
	printf("%d", c[0][1]);
	return 0;
}