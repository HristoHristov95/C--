#include<iostream>
#include<ctime>
using namespace std;
class stopwatch
{
	clock_t start1;
	clock_t end;
public:
	stopwatch();
	~stopwatch();
	void start();
	void stop();
	void show();
};
stopwatch::stopwatch()
{
	start1 = clock();
}
stopwatch::~stopwatch()
{
	clock_t end;
	end = clock();
	cout << "Elapsed time : " << (end - start1) / CLOCKS_PER_SEC << "\n";
}
void stopwatch::start()
{
	clock_t a1;
	for (int i = 0 ; i<1000000000000 ; i++)
	{
		if ((i % 250000000) == 0)
		{
			a1 = clock();
			if (((a1 - start1) / CLOCKS_PER_SEC) >= 1)
				cout << "Time : " << difftime(a1, start1)/CLOCKS_PER_SEC << "\n";
		}
	}
}
void stopwatch::stop()
{
	clock_t end;
	end = clock();
	cout << "Elapsed time : " << (end - start1) / CLOCKS_PER_SEC << "\n";
}
int main()
{
	class stopwatch ob1;
	ob1.start();
	ob1.stop();
	return 0;
}