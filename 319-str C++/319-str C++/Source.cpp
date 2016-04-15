#include<iostream>
#include<fstream>
using namespace std;
int main1()
{
	char c;
	int i = 0;
	char ch[] = { "Alabala alabala alabala\0" };
	ofstream fileName;
	fileName.open("Faila.bin", ios::binary | ios::out);
	do
	{
		fileName.put(ch[i]);
		i++;
	} while (ch[i] != '\0');
	fileName.close();
	ifstream OpenedFile;
	OpenedFile.open("Faila.bin", ios::binary | ios::in);
	char read[100];
	int lenght = 0;
	lenght = strlen(ch);
		OpenedFile.read(read, lenght*sizeof(char));
		read[lenght] = '\0';
		cout << "The string is : " << read << " And is long : " << lenght<<'\n';
	return 0;
}