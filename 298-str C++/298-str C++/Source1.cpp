#include<iostream>
#include<ctime>
using namespace std;
class watch{
	time_t tp;
public:
	watch(){ time(&tp); }
	friend ostream &operator<<(ostream &stream, watch &ibj);
};
ostream &operator<<(ostream &stream, watch &obj1)
{
	stream << "The date is : " << obj1.tp/CLOCKS_PER_SEC<<'\n';
	return stream;
}
int main2()
{
	watch obj1;
	cout << obj1;
	return 0;
}