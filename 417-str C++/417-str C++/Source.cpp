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
	Shape *obTemp=NULL;
	try{
		switch (rand() % 4)
		{
		case 0: 
			obTemp =new(nothrow) Line;
			if (!obTemp)
			{
				throw obTemp;
			}
			return obTemp;
		case 1:
			obTemp = new(nothrow) Rectangle;
			if (!obTemp)
			{
				throw obTemp;
			}
			return obTemp;
		case 2:
			obTemp = new(nothrow) triangle;
			if (!obTemp)
			{
				throw obTemp;
			}
			return obTemp;
		case 3: 
			obTemp = new(nothrow) NullShape;
			if (!obTemp)
			{
				throw obTemp;
			}
			return obTemp;
		}
	}
	catch (...)
	{
		cout << "Allocating memory error.\n";
		return NULL;
	}
}
int main1()
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