#include<iostream>
using namespace std;
class t_and_d
{
	char *time;
	char *data;
public:
	t_and_d(char *p,char *q);
	void show();
};
t_and_d::t_and_d(char *p, char *q)
{
	time = (char*)malloc(20 * sizeof(char));
	data = (char*)malloc(20 * sizeof(char));
	strcpy(time, p);
	strcpy(data, q);
}
void t_and_d::show()
{
	cout << "The time was : " << time<<"\n";
	cout << "The date was : " << data<<"\n";
}
int main2()
{
	char *p=NULL;
	p = (char*)malloc(20 * sizeof(char));
	strcpy(p, __DATE__);
	char *a=NULL;
	a = (char*)malloc(20 * sizeof(char));
	strcpy(a, __TIME__);
	t_and_d ob1(a,p);
	ob1.show();
	free(a);
	free(p);
	return 0;
}