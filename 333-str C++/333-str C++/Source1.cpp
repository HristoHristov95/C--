#include<iostream>
using namespace std;
istream &reject(istream &stream)
{
	char ch;
	do
	{
		stream>> ch;
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			stream.putback(ch);
			return stream;
		}
	} while (true);
}
int main2()
{
	char a[100];
	cin >> reject >> a;
	cout << a << '\n';
	return 0;
}