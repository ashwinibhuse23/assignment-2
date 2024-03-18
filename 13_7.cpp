#include<iostream>
using namespace std;

class Employee
{
	private: int eno;
			char name[20];
			
	protected : int salary;
	
	public: 
			void get()
			{
				cout<<"\n Enter empno ,name and salary";
				cin>>eno>>name>> salary;
				
			}	
			
			void show()
			{
				cout<<"\n Emp No = "<<eno<<"\n Name = "<<name<<"\n Salary =";
				
			}
};

class Bonus
{
	private: int b;
	
	public: 
			void rb()
			{
				cout<<"\n Enter Bonus =";
				cin>>b;
			}
};

class NetSal:public Employee,public Bonus
{
	private: int netsal;
	
	public: 
	
			void net_show()
			{
				netsal= salary+b;
				cout<<"\n Net Salary of the Employee = "<<netsal;
			}
};
main()
{
	NetSal obj1;
	obj1.get();
	obj1.show();
	
	obj1.rb();
	
	obj1.net_show();
	
	

	
	
	
}