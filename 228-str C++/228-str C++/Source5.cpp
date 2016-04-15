#include<iostream>
using namespace std;
class three_d
{
	int x, y, z;
public:
	three_d(int i, int j, int k){ x = i; y = j; z = k; }
	three_d(){ x = 0; y = 0; z = 0; }
	void get(int &i, int &j, int &k){ i = x; j = y; k = z; }
	void show(){ cout << "This is X: " << x << "\n"; cout << "This is Y:" << y << "\n"; cout << "This is Z: " << z << "\n"; }
	bool operator==(three_d obj);
	bool operator!=(three_d &obj);
	bool operator||(three_d &obj);
};
bool three_d::operator==(three_d obj)
{
	return (x == obj.x) &&(y == obj.y) &&(z== obj.z);
}
bool three_d::operator!=(three_d &obj)
{
	return (x !=obj.x) && (y!=obj.y)&&(z!=obj.z);
}

bool three_d::operator||(three_d&obj)
{
	return (x || obj.x) && (y || obj.y) && (z || obj.z);
}
int main()
{
	three_d ob(10, 10,10), ob2(10, 10,10), ob3(20, 20,20);
	int RetValue;
	RetValue = (ob == ob3);
	cout << "RetValue is : " << RetValue << "\n";
	return 0;
}
