#include<iostream>
using namespace std;
template<class Data>class list{
public:
	list *next;
	list *head;
	list *temp;

	list(){ next = head = temp = NULL; }
	Data object;
	Data retrieve();
	void insert(Data i);
};
template<class Data>void list<Data>::insert(Data i)
{
	list *p;
	p = new list;
	if (!p)
	{
		cout << "Allocating memory error.\n";
		exit(1);
	}
	p->object = i;
	if (head)
	{
		head->next = p;
	}
	head = p;
	if (!temp)
	{
		temp = p;
	}
}
template<class Data>Data list<Data>::retrieve()
{
	list *p,*curr;
	p = curr = temp;
	Data element;
	element = curr->object;
	p = p->next;
	delete curr;
	temp = curr = p;
	return element;
}
int main3()
{
	list<char> obj;
	obj.insert('a');
	obj.insert('b');
	obj.insert('c');
	list<int> obj1;
	obj1.insert(2);
	obj1.insert(3);
	obj1.insert(4);
	char ch;
	ch = obj.retrieve();
	cout << "CH #1: " << ch << endl;
	ch = obj.retrieve();
	cout << "CH #2: " << ch << endl;
	ch = obj.retrieve();
	cout << "CH #3: " << ch << endl;
	int number;
	number = obj1.retrieve();
	cout << "Number #1: " << number << endl;
	number = obj1.retrieve();
	cout << "Number #2: " << number << endl;
	number = obj1.retrieve();
	cout << "Number #3: " << number << endl;
	return 0;
}