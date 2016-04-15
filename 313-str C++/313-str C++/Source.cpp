#include<iostream>
#include<fstream>
using namespace std;
int main1()
{
	ifstream gg("test.txt");
	char ch;
	bool check=false;
	char stream[100];
	int count = 0;
	if (gg.is_open())
	{
		cout << "File cannot be opened";
		exit(1);
	}
	do
	{
		gg>> ch;
		stream[count] = ch;
		count++;
		check = gg.eof();
	} while (check ==false);
		cout << "The number counted is : " << count<<'\n';
		gg.close();
		return 0;
}