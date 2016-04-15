#include<iostream>
#include<cstring>
using namespace std;
char *reverse(char *ptr, int count = 0)
{
	char c;
	char *string;
	int stringlenght;
	stringlenght = strlen(ptr);
	string = new char[stringlenght];
	strcpy(string, ptr);
	if (count == 0)
	{
		for (int i = 0, m = stringlenght-1; i < stringlenght/2; i++, m--)
		{
			c = string[i];
			string[i] = string[m];
			string[m] = c;
		}
	}
	else
	{
		for (int i = 0, m = count; i < count/2; i++, m--)
		{
			c = string[i];
			string[i] = string[m];
			string[m] = c;
		}
	}
	return string;
}
int main()
{
	char *str;
	str=reverse("This is just a test!",5);
	cout << "The 1-rst string is : " << str<<"\n";
	str = reverse("This is just a test!");
	cout << "The 2-cond string is : " << str<<"\n";
	return 0;
}