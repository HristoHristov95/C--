#include<iostream>
using namespace std;
template<class X, class Xarray>int find(X object, Xarray list, X size)
{
	for (int i = 0; i < size; i++)
	{
		if (object == list[i])
		{
			return list[i];
		}
	}
	return -1;
}
int main()
{
	int o[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int object = 5, returnedValue;
	returnedValue = find(object, o, 10);
	cout << "Result: " << returnedValue << endl;
	return 0;
}