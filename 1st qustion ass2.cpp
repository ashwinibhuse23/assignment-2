#include<iostream>
using namespace std;
class student
{
	private :
		int rollno;
		char name[10];
		public :
			void set_data()
			{
				cout<<"\n Enter student rollno,name";
				cin>>rollno>>name;
			}
			void show_data()
			{
				cout<<"\n Rollno ="<<rollno<<"\nName ="<<name;
			}
};
main()
{
	student s1;
	s1.set_data();
	s1.show_data();
}
