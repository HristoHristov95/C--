#include<iostream>
using namespace std;
class strtype
{
	char *p;
	int size;
public:
	strtype(){ size = 0; p = NULL; }
	strtype(char *s);
	void show(){ cout << "The string P is " << p << "\n"; }
	friend strtype operator+(strtype obj1, strtype obj2);
	strtype operator=(strtype obj1);
	friend bool operator<(strtype obj1, strtype obj2);
	friend bool operator>(strtype obj1, strtype obj2);
	friend bool operator==(strtype obj1, strtype obj2);
};
strtype::strtype(char *s)
{
	int lenght;
	lenght = strlen(s) + 1;
	p = new char[lenght];
	if (!p)
	{
		cout << "Allocating memory error \n";
		exit(1);
	}
	strcpy(p, s);
}
strtype operator+(strtype obj1, strtype obj2)
{
	int str1, str2,total,i;
	str1 = strlen(obj1.p);
	str2 = strlen(obj2.p);
	total = str1 + str2;
	strtype temp;
	temp.p = new char[total];
	for (i = 0; i < str1; i++)
	{
		temp.p[i] = obj1.p[i];
	}
	for (int m = 0; m < str2; i++, m++)
	{
		temp.p[i] = obj2.p[m];
	}
	temp.p[total] = '\0';
	return temp;
}
strtype strtype::operator=(strtype obj1)
{
	int strlenght;
	strlenght = strlen(obj1.p) + 1;
	p = new char[strlenght];
	if (!p)
	{
		cout << "Allocating memory error\n";
		exit(1);
	}
	strcpy(p, obj1.p);
	return *this;
}
bool operator<(strtype obj1, strtype obj2)
{
	int retValue;
	retValue=strcmp(obj1.p, obj2.p);
	if (retValue < 0)
	{
		return true;
	}
	else
	{
		return false;
	} 
}
bool operator>(strtype obj1, strtype obj2)
{
	int retValue;
	retValue = strcmp(obj1.p, obj2.p);
	if (retValue > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator==(strtype obj1, strtype obj2)
{
	int retValue;
	retValue = strcmp(obj1.p, obj2.p);
	if (retValue == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int retValue1, retValue2, retValue3;
	strtype ob("This is a test."), ob1("This is a test."), ob2("This is a test 1 ."), ob3;
	ob3 = ob + ob1;
	ob3.show();
	retValue1 = (ob == ob1);
	ob1 = ob2;
	ob1.show();
	cout << "The value 1 is : " << retValue1 << "\n";
	return 0;
}