#include<iostream>
#include<cstdio>
#include<time.h>
using namespace std;
class date
{
	int day, month, year;
public:
	date(char *str);
	date(int m, int d, int y){ day = y; month = m, year = y; }
	date(time_t *ok){ *ok = time(NULL); cout << "The time : " << ctime(&(*ok)); }
	void show(){ cout << month << '/' << day << '/'; cout << year << "\n"; }
};

date::date(char *str)
{
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}
int main2()
{
	time_t p=0;
	date sdate("12/31/99");
	date idate(12, 31, 99);
	date tdate(&p);
	sdate.show();
	idate.show();
	return 0;
}