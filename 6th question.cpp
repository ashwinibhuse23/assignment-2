#include<iostream>
using namespace std;
class Area
{
	private : 
	int length,breadth;
	public :
		
			void setdim (int l, int b)
			{
				length = l;
			    breadth = b;
			    
			}
			
			
		
		int getarea()
		{
			return length*breadth;
			
		}
		
		
};
main()
{
	int Ar;
	Area ar;
	ar.setdim(4,5);
	Ar = ar.getarea();
    cout<<"\n Area ="<<Ar;

	
	
	
}
