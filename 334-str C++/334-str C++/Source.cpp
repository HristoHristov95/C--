#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
#define SIZE 40
class inventory{
	char item[SIZE];
	int onhand;
	double cost;
public:
	inventory(char *i, int o, double c)
	{
		strcpy(item, i);
		onhand = o;
		cost = c;
	}
	int store(fstream &stream,long long &pos);
	void retrieve(fstream &stream,long long &pos,int len,int flag);
	friend ostream &operator<<(ostream &stream, inventory obj);
	friend istream &operator>>(istream &stream, inventory &obj);
};
ostream &operator<<(ostream &stream, inventory obj)
{
	stream << obj.item << ": " << obj.onhand;
	stream << " on hand at $" << obj.cost << '\n';
	return stream;
}
istream &operator>>(istream &stream, inventory &obj)
{
	cout << "Enter item name: ";
	stream >> obj.item;
	cout << "Enter number on hand: ";
	stream >> obj.onhand;
	cout << "Enter cost: ";
	stream >> obj.cost;
	return stream;
}
int inventory::store(fstream &stream,long long &pos)
{
	ofstream gg;
	gg.open("Newfile.txt", ios::out | ios::app);
	if (!gg)
	{
		cout << "Error creating file \n";
	}
	int lenght = strlen(item);
	if (pos)
	{
		gg.seekp(pos, ios::beg);
		for (int i = 0; i < lenght; i++)
		{
			gg.put(item[i]);
		}
		gg << onhand;
		gg.put(' ');
		gg << cost;
	}
	else
	{
		for (int i = 0; i < lenght; i++)
		{
			gg.put(item[i]);
		}
		gg << onhand;
		gg.put(' ');
		gg << cost;
	}
	pos = gg.tellp();
	gg.close();
	return lenght;
}
void inventory::retrieve(fstream &stream,long long &pos,int lenn,int flag)
{
	ifstream Newg;
	Newg.open("Newfile.txt", ios::in);
	if (!Newg)
	{
		cout << "Error opening file\n";
	}
	char str[100];
	char ch;
	int lenght = strlen(item)+1;
	if (pos)
	{
		Newg.seekg(pos, ios::beg);
		Newg.getline(str, lenght);
		Newg >> onhand;
		Newg >> cost;
		cout << str;
		cout << ' ';
		cout << onhand;
		cout << ' ';
		cout << cost;
		cout << '\n';
	}
	else
	{
		int k = 0;
		for (int i = 0; i < lenn; i++)
		{
			 Newg.get(ch);
			 str[i] = ch;
			 k = i;
		}
		str[k] = '\0';
		Newg >> onhand;
		Newg >> cost;
		if (flag == 1)
		{
			cout << str << ' ' << onhand << ' ' << cost << '\n';
		}
	}
	pos = Newg.tellg();
	Newg.close();
}
int main1()
{
	fstream NewFile;
	int lenght = 0,flag=0;
	long long decision,position=0,position1=0;
	inventory obj1("This is a test.", 10, 5.5), obj2("This is a second test", 11, 2.2);
	lenght=obj1.store(NewFile,position);
	obj2.store(NewFile,position);
	cout << "Which element you want to retrieve info for 1 or 2 : " << '\n';
	do
	{
		cin >> decision;
	} while ((decision != 1) && (decision != 2));
	if (decision == 1)
	{
		flag = 1;
		obj1.retrieve(NewFile,position1,lenght,flag);
	}
	if (decision == 2)
	{
		obj1.retrieve(NewFile,position1,lenght,flag);
		obj2.retrieve(NewFile,position1,lenght,flag);
	}
	return 0;
}