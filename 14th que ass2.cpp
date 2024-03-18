#include<iostream>
using namespace std;
class students
{
	
		public:
			 int average(int a,int b,int c)
			{
			
			
			
			return (a+b+c)/3;
		}
		
			
		

};
 int main()
{
	students h;
	cout<<"\nEnter height=";
	int h1,h2,h3;
	cin>>h1;
	cin>>h2;
	cin>>h3;
    float avg;
    
	avg=h.average(h1,h2,h3);
	cout<<"\nstudents average height="<<avg;
    
}
