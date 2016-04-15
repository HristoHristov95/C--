#include<stdio.h>
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
void qsort(int v[], int left, int right)
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
		if (v[i] < v[left])
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
	int a[] = { 2, 3, 4, 1, 9, 2, 4, 6, 7 };
	qsort(a,4,5);
	for (int i = 0; i < 9; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}