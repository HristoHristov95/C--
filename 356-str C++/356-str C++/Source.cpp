#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;
class list{
public:
	list *head;
	list *head1,*head2;
	list *tail;
	list *next;
	list *previous;
	int num;

	list(){ head = tail = next = NULL; }
	virtual void store(int i) = 0;
	virtual int retrieve() = 0;
};
class queue :public list{
public:
	void store(int i);
	int retrieve();
};
//spisuk opashka
void queue::store(int i)
{
	list *item;
	item = new queue;
	if (!item)
	{
		cout << "Allocating memory error\n";
		exit(1);
	}
	item->num = i;
	if (tail) //proverqva daku tail e NULL ako ne e 
	{
		tail->next = item;
	}
	tail = item;
	item->next = NULL;
	if (!head)
	{
		head = tail;
	}
}
int queue::retrieve()
{
	int i;
	list *p;
	if (!head)
	{
		cout << "List empty\n";
		return 0;
	}
	i = head->num;
	p = head;
	head = head->next;
	delete p;
	return i;
}
class stack :public list{
public:
	void store(int i);
	int retrieve();
};
void stack::store(int i)
{
	list *item;
	item = new stack;
	if (!item)
	{
		cout << "Allocating error\n";
		exit(1);
	}
	item->num = i;
	if (head)
	{
		item->next = head;
	}
	head = item;
	if (!tail)
	{
		tail = head;
	}
}
int stack::retrieve()
{
	int i;
	list *p;
	if (!head)
	{
		cout << "List empty\n";
		return 0;
	}
	i = head->num;
	p = head;
	head = head->next;
	delete p;
	return i;
}
class DoubleLinked :public list{
public:
	void store(int i);
	int retrieve();
	void sorting();
	void deleteing();
};
void DoubleLinked::deleteing()
{
	list *p,*temp;
	p = head1;
	while (p)
	{
		temp = p;
		p = p->next;
		delete temp;
	}
}

void DoubleLinked::store(int i)
{
	list *p;
	p = new DoubleLinked;
	if (!p)
	{
		cout << "Allocating memory error\n";
		exit(1);
	}
	p->num = i;
	if (tail)
	{
		tail->next = p;
		p->previous = tail;
	}
	tail = p; //pri posledniq element tail durji last element
	if (!head)
	{
		head = tail; //head durji first element
		head1 = head;
		head->next = NULL;
		head->previous = NULL;
	}
	head2 = p;
}
int DoubleLinked::retrieve()
{
	char ch;
	list *p;
	int i = 0;
	cout << "Which element you want to retrieve next or prev ?\n";
	cin >> ch;
	if (ch == 'N')
	{
		p = head;
		i = p->num;
		if (p->next == NULL)
		{
			head = head1;
			return i;
		}
		head = head->next;
		return i;
	}
	else
	{
		p = tail;
		i = p->num;
		if (tail->previous == NULL)
		{
			tail = head2;
			return i;
		}
		tail = tail->previous;
		return i;
	}
}

void DoubleLinked::sorting()
{
	list *p;
	list *s;
	int m=0;
	p = head1;
	for (int i = 0; i < 5; i++)
	{
		for (s = head1; s!=NULL;s = s->next)
		{
			if (p->num>s->num)
			{
				m = p->num;
				p->num = s->num;
				s->num = m;
			}
		}
		p = p->next;
	}
	for (p = head1; p != NULL; p = p->next)
	{
		cout << p->num<<'\n';
	}
}
int main()
{
	/*list *p;
	queue q_ob;
	p = &q_ob;
	p->store(1);
	p->store(2);
	p->store(3);
	cout << "Queue : \n";
	cout << p->retrieve();
	cout << p->retrieve();
	cout << p->retrieve();
	cout << '\n';
	stack s_ob;
	p = &s_ob;
	p->store(1);
	p->store(2);
	p->store(3);
	cout << "Stack: \n";
	cout << p->retrieve();
	cout << p->retrieve();
	cout << p->retrieve();
	cout << '\n';*/
	list *p;
	DoubleLinked object;
	p = &object;
	p->store(5);
	p->store(3);
	p->store(4);
	p->store(1);
	p->store(2);
	cout << "Double linked: \n";
	cout << p->retrieve() << '\n';
	cout << p->retrieve() << '\n';
	cout << p->retrieve() << '\n';
	cout << p->retrieve() << '\n';
	cout << p->retrieve() << '\n';
	cout << p->retrieve() << '\n'; 
	cout << p->retrieve() << '\n';
	cout << '\n';
	object.sorting();
	object.deleteing();
	return 0;
}