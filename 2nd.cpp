#include<iostream>
using namespace std;
class student
{
	private :
		int rollno;
		long int phoneno;
		char name[40];
		char address[40];
		public:
			void get()
			{
				cout<<"\n Enter the rollno";
				cin>>rollno;
				cout<<"\n Enter the phoneno";
				cin>>phoneno;
				cout<<"\n Enter the name";
				cin>>name;
				cout<<"\n Enter the address";
				cin>>address;
			}
			void show()
			{
				cout<<"\n Rollno ="<<rollno;
				cout<<"\n phone no ="<<phoneno;
				cout<<"\nName ="<<name;
				cout<<"\nAddress ="<<address;
			}
};
main()
{
	student s1;
	student s2;
	s1.get();
	s1.show();
	s2.get();
	s2.show();
}
