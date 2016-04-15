#include<iostream>
#include<fstream>
using namespace std;
class account{
	int custnum;
	char name[80];
	double balance;
public:
	account(int c, char *n, double b)
	{
		custnum = c;
		strcpy(name, n);
		balance = b;
	}
	void insert(account &obj,char *s);
};
void account::insert(account &obj,char *s)
{
	ofstream FileName;
	FileName.open(s,ios::out | ios::binary);
	int i = 0;
	do
	{
		FileName.put(obj.name[i]);
		i++;
	} while (obj.name[i] != '\0');
	FileName.write((char*)&obj.custnum, sizeof(int));
	FileName.write((char*)&obj.balance, sizeof(double));
}
int main()
{
	account object(10,"Hristo Hristov",1100000);
	object.insert(object, "NewFileExcist");
	return 0;
}