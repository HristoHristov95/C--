#include<iostream>
#include<vector>
using namespace std;
int main1()
{
	vector<int> v;
	int i;
	cout << "Size: " << v.size() << endl;
	for (i = 0;i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "Current contents : \n" << "Size now: " << v.size() << endl;
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
	for (i = 0; i < 10; i++)
	{
		v.push_back(i + 10);
	}
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
	for (i = 0; i < v.size(); i++)
	{
		v[i] = v[i] + v[i];
	}
	cout << "Contents doubled: \n";
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	return 0;
}