#include<iostream>
using namespace std;
class building{
	int stores;
	int NumRooms;
	int Plosht;
	public:
	building(int a, int b, int c){ stores = a; NumRooms = b, Plosht = c; }
	void show_building(){ cout << "Stores :" << stores << ' ' << "Number of rooms : " << NumRooms << ' ' << "Plosht: " << Plosht << '\n'; }
};
class house :public building{
	int NumBedrooms;
	int NumBathrooms;
public:
	house(int a, int b,int c,int d,int e):building(c,d,e){ NumBedrooms = a; NumBathrooms=b; }
	void show_house(){ cout << "Number of Bedrooms: " << NumBedrooms << ' ' << "Number of Bathrooms: " << NumBathrooms << '\n'; }
};
class office:public building
{
	int FireExtinquishers;
	int TelPosts;
public:
	office(int a, int b,int c,int d,int e):building(c,d,e){ FireExtinquishers = a; TelPosts = b; }
	void show_office(){ cout << "Number of Fire Extinquishers : " << FireExtinquishers << ' ' << "Number of Telephone posts: " << TelPosts << "\n"; }
};
int main1()
{
	office ob(1, 2, 3, 4, 5);
	house ob1(5, 4, 3, 2, 1);
	ob.show_building();
	ob.show_office();
	cout << '\n' << '\n';
	ob1.show_building();
	ob.show_office();
	return 0;
}