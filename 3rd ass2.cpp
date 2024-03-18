#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
	private : 
	int s1,s2,s3;
	float sq;
	int perimeter,area;
	public :
		void get()
		{
			cout<<"\n enter the value of s1,s2,s3";
			cin>>s1>>s2>>s3;
			sq = (s1+s2+s3)/3;
			area = sqrt(sq*(sq-s1)*(sq-s2)*(sq-s3));
			perimeter = s1+s2+s3;
		
		}
		void show()
		{
			cout<<"\nS1 ="<<s1<<"\nS2 ="<<s2<<"\nS3 ="<<s3;
			cout<<"\n Area ="<<area;
			cout<<"\n Perimeter="<<perimeter;
			cout<<endl;
		}
	
};
main()
{
	triangle t1;
	t1.get();
	t1.show();
	
	
}
