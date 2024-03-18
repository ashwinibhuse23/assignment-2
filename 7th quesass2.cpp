/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.*/


#include<iostream>
using namespace std;
class rect
{
	private : 
	int l,b;
	public :
		
			rect (int x, int y)
			{
				l = x;
			    b = y;
			    
			}
			
			
		
		int returnarea()
		{
			return l*b;
			
		}
		
		
};
main()
{
	rect r1(5,5);
	int p,q;
	
	p =r1.returnarea();
    
	rect r2(3,6);
     q=r2.returnarea();
     cout<<"\n Area ="<<p;
     cout<<"\n Area ="<<q;

	
	
	
}
