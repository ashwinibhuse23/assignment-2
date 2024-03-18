#include<iostream>
using namespace std;
class Employee
{
	private : 
	int yoj;
	char name[40],address[50];
	float salary;
	public :
		void get()
			{
				cout<<"\n Enter yoj, name, address, salary";
			    cin>>yoj>>name>>address>>salary;
			}
			
		
		void show()
		{
			cout<<"\n"  <<yoj<<"\t" <<    name    <<"\t   "   <<    address   <<   "\t "  <<   salary;
		}
	
};
main()
{
	Employee e1,e2,e3;
	e1.get();
	e1.show();
	e2.get();
	e2.show();
	e3.get();
	e3.show();
	cout<<"\n---------------------";
	cout<<"\n Employee details :";
	
}
