#include<iostream>
#include<cstdlib>
#include<typeinfo>
using namespace std;
class Shape{
public:
	virtual void example() = 0;
};
class Rectangle : public Shape{
public:
	void example(){
		cout << "*****\n*   *\n*   *\n*****\n";
	}
};
class triangle :public Shape{
public:
	void example(){
		cout << "*\n* *\n*  *\n*****\n";
	}
};
class Line :public Shape{
public:
	void example(){
		cout << "******\n";
	}
};
class NullShape :public Shape{
public:
	void example(){

	}
};
Shape* generator()
{
	switch (rand() % 4)
	{
	case 0: return new Line;
	case 1: return new Rectangle;
	case 2: return new triangle;
	case 3: return new NullShape;
	}
	return NULL;
}
int main2()
{
	int i;
	Shape *p;
	Rectangle *p1;
	triangle *p2;
	Line *p3;
	NullShape *p4;
	for (i = 0; i < 10; i++)
	{
		p = generator();
	//	cout << typeid(*p).name() << endl;
		/*if (typeid(*p) != typeid(NullShape))
		{
			p->example();
		}*/
		p4 = dynamic_cast<NullShape *>(p);
		if (!p4)
		{
			cout << typeid(*p).name() << endl;
			p->example();
		}

	}
	return 0;
}