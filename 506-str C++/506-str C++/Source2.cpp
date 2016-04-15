#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str;
	cout << "Please enter string: \n";
	getline(cin, str);
	int i;
	i = count_if(str.begin(), str.end(), islower);
	cout << "Lower case : " << i << '\n';
	return 0;
}