#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
	private :
		int s1,s2,s3;
		float sq;
		int area, perimeter;
	public :
		triangle(int x, int y, int z)
		{
			s1 = x;
			s2 = y;
			s3 = z;
			area = sqrt(sq*(sq-s1)*(sq-s2)*(sq-s3));
			perimeter = s1+s2+s3;
		}
		void show()
		{
			cout<<"\n S1="<<s1<<"\n S2 ="<<s2<<"\n S3 ="<<s3<<"\n Area ="<<area<<"\n Perimeter ="<<perimeter;
		}
		
			
		
				
};
main()
{
	triangle t1(4,5,5);
	t1.show();
}
