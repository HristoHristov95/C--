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
	three_d &operator+(three_d &obj);
//	three_d &operator-(three_d &obj);
	//friend three_d &operator++(three_d &obj);
	//friend three_d &operator--(three_d &obj);
};
three_d &three_d::operator+(three_d &obj)
{
	three_d temp;
	temp.x = x + obj.x;
	temp.y = y + obj.y;
	temp.z = z + obj.y;
	return temp;
}
/*three_d &three_d::operator-(three_d &obj)
{
	three_d temp;
	temp.x = x - obj.x;
	temp.y = y - obj.y;
	temp.z = z - obj.z;
	return temp;
}*/
/*three_d &operator++(three_d &obkj)
{
	++obkj.x;
	++obkj.y;
	++obkj.z;
	return obkj;
}
three_d &operator--(three_d &obj)
{
	--obj.x;
	--obj.y;
	--obj.z;
	return obj;
}*/
int main4()
{
	three_d ob(10, 10, 10), ob1(20, 20, 20),ob3;
	ob3 = ob + ob1;
	ob3.show();
//	ob3 = ob-ob1;
	ob3.show();
//	ob++;
	ob.show();
	//ob1--;
	ob1.show();
	return 0;
}