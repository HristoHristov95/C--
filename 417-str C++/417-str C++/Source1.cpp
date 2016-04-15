#include<iostream>
using namespace std;
class DataStruckt{
public:
	DataStruckt(){ temp = head = next = NULL; }
	DataStruckt *temp;
	DataStruckt *head;
	DataStruckt *next;
	int variable;
	virtual DataStruckt* DataStructFactory(char what) = 0;
	virtual void retrieving(DataStruckt **gg) = 0;
};
class Stack : public DataStruckt{
public:
	DataStruckt* DataStructFactory(char what);
	void retrieving(DataStruckt** gg);
};
DataStruckt *Stack::DataStructFactory(char what)
{
	DataStruckt *p;
	
	p = new Stack;
	if (!p)
	{
		cout << "Allocating memory error.\n";
		exit(1);
	}
	cout << "Please enter number for variable : ";
	cin >> p->variable;
	if (!head)
	{
		head = p;
	}
	p->next = temp;
	temp = p;
	return temp;
}
void Stack::retrieving(DataStruckt **gg)
{
	int i = 1;
	head = *gg;
	while (head)
	{
		cout << "Element #" << i << ' ' << "has value :" << head->variable<<'\n';
		temp = head;
		head = head->next;
		delete temp;
		i++;
	}
}
class Queue :public DataStruckt{
public:
	DataStruckt* DataStructFactory(char what);
	void retrieving(DataStruckt** gg);
};
DataStruckt * Queue::DataStructFactory(char what)
{
	DataStruckt *p;
	p = new Queue;
	if (!p)
	{
		cout << "Allocating memory error.\n";
		exit(1);
	}
	cout << "Please enter number for variable.\n";
	cin>>p->variable;
	if (!head)
	{
		head =temp= p;
	}
	temp->next = p;
	temp = p;
	temp->next = NULL;
	return head;
}
void Queue::retrieving(DataStruckt** gg)
{
	int i = 1;
	head = *gg;
	while (head)
	{
		cout << "Element with #" << i << ' ' << "has value: " << head->variable<<'\n';
		temp = head;
		head = head->next;
		delete temp;
		i++;
	}
}
int main()
{
	DataStruckt *decision1=NULL,*decision2=NULL;
	Stack obj;
	Queue obj1;
	char decision;
	for (int i = 0; i < 3; i++)
	{
		cout << "Stack or queue?" << endl;
		cin >> decision;
		if (decision == 's')
		{
			decision1 = obj.DataStructFactory(decision);
		}
		if (decision == 'q')
		{
			decision2 = obj1.DataStructFactory(decision);
		}
	}
		obj.retrieving(&decision1);
		obj1.retrieving(&decision2);
	return 0;
}