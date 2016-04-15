#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;
class output{
	static char outbuf[255];
	static int inuse;
	static int oindex;
	char str[80];
	int i;
	int who;
public:
	output(int w, char *s){ strcpy(str, s); i = 0; who = w; }
	int putbuf(output ox)
	{
		if (!str[i])
		{

			inuse = 0;
			return 0;
		}
		if (!inuse) {
			inuse = who;
		}
		if (inuse != who)
		{
			cout << "Currently " << inuse << " is being blocked\n";
			return -1;
		}
		if (str[i])
		{
			outbuf[oindex] = str[i];
			i++; oindex++;
			cout << "Processing " << who << " sending char\n";
			outbuf[oindex] = '\0';
			return 1;
		}
		return 0;
	}
	void show(){ cout << outbuf << '\n'; }
};
char output::outbuf[255];
int output::inuse = 0;
int output::oindex = 0;

int main2()
{
	output o1(1, "This is a test."), o2(2, "statics"),o3(3,"OMG wat da faque.");
	while (o1.putbuf(o1) | o2.putbuf(o2) | o3.putbuf(o3));
	o1.show();
	return 0;
}