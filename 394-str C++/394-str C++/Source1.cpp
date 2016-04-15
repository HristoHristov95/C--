#include<iostream>
#include<fstream>
using namespace std;
template<class X>class coord{
	X x, y;
public:
	coord(X i, X j){ x = i; y = j; }
	void show(){
		cout << x << ", " << y << endl;
	}
};
int main()
{
	coord<int> ob(1, 2), o2(3, 4);
	ob.show();
	o2.show();
	coord<double> o3(00., 0.23), o4(10.19, 3.098);
	o3.show();
	o4.show();
	return 0;
}