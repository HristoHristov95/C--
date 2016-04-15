#include<iostream>
#include<list>
#include<cstring>
using namespace std;
class Project{
public:
	char name[40];
	int days_to_completion;
	Project(){
		strcpy(name, "");
		days_to_completion = 0;
	}
	Project(char *n, int d){
		strcpy(name, n);
		days_to_completion = d;
	}
	void add_days(int i){
		days_to_completion += i;
	}
	void sub_days(int i){
		days_to_completion -= i;
	}
	bool completed(){ return !days_to_completion; }
	void report(){
		cout << name << ": ";
		cout << days_to_completion;
		cout << " days left.\n";
	}
};
bool operator<(const Project &a, const Project &b)
{
	return a.days_to_completion < b.days_to_completion;
}
bool operator>(const Project &a, const Project &b)
{
	return a.days_to_completion>b.days_to_completion;
}
bool operator==(const Project &a, const Project &b)
{
	return a.days_to_completion == b.days_to_completion;
}
bool operator !=(const Project &a, const Project &b)
{
	return a.days_to_completion != b.days_to_completion;
}
int main()
{
	list<Project> proj, proj1;
	proj.push_back(Project("Compiler", 35));
	proj.push_back(Project("SpredSheet", 190));
	proj.push_back(Project("STL Implementation", 1000));

	proj1.push_back(Project("Data Base", 780));
	proj1.push_back(Project("Mail Merge", 50));
	proj1.push_back(Project("COM objects", 300));

	proj.sort();
	proj1.sort();
	proj.merge(proj1);

	list<Project>::iterator p,q;
	p = proj.begin();
	for (; p != proj.end();)
	{
		do
		{
			p->sub_days(5);
			p->report();
		} while (!p->completed());
		p++;
	}
	return 0;
}