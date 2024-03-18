#include<iostream>
using namespace std;
class Student
{
	public:
		int avgmark, rollno=0;
	void set()
	{
		cout<<"\nenter average marks";
		cin>>avgmark;
		rollno++;
	}
	void get()
	{
		int rollno;
		cout<<"\nroll_no="<<rollno<<"Average Marks="<<avgmark;
	}
};
main()
{
Student s[8];
int r;
for(r=0;r<8;r++)
{
	s[r].set();
}
for(r=0;r<8;r++)
{
	s[r].get();
}
}
