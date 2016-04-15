#include<iostream>
using namespace std;
template<class Data>class input{
	Data object;
public:
	input(char *s,Data t1,Data t2);
};
template<class Data>input<Data>::input(char *s,Data t1,Data t2)
{
	Data EnteredInfo;
	cout << s << endl;
	cin >> EnteredInfo;
	for (;;)
	{
		if (EnteredInfo >= t1 && EnteredInfo <= t2)
		{
			object = EnteredInfo;
			break;
		}
		else
		{
			cout << s << endl;
			cin >> EnteredInfo;
		}
	}
}
int main()
{
	input<int> obj1("Please enter number", 22, 100);
	return 0;
}