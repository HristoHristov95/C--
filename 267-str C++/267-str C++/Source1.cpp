#include<iostream>
using namespace std;
class base{
	int i, j;
public:
	base(int a = 0, int k = 0){ i = a; j = k; }
	void showij(){ cout << i << ' ' << '\n'; }
};
class derived :public base{
	int k;
public:
	derived(int a, int b, int c) :base(b, c){
		k = a;
	}
	void show(){ cout << k << ' '; showij(); }
};
int main()
{
	derived ob(1, 2, 3);
	ob.show();
	return 0;
}