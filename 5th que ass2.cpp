#include<iostream>
using namespace std;
class rectangle
{
	private : 
	int l,b;
	public :
		
			rectangle (int x, int y)
			{
				l = x;
			    b = y;
			    
			}
			
			
		
		int area()
		{
			return l*b;
			
		}
		
		
};
main()
{
	rectangle r1(4,5);
	int p,q;
	
	p =r1.area();
    
	rectangle r2(5,8);
     q=r2.area();
     cout<<"\n Area ="<<p;
     cout<<"\n Area ="<<q;

	
	
	
}
