#include<iostream>
using namespace std;
class CountDown{
	int incr;
	int target;
	mutable int current;
public:
	CountDown(int delay, int i = 1){
		target = delay;
		incr = i;
		current = 0;
	}
	bool counting()const{
		current += incr;
		if (current >= target)
		{
			cout << '\a';
			return false;
		}
	}
};
int main()
{
	CountDown ob(100, 2);
	while (ob.counting());
	return 0;
}