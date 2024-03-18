/*Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.*/
# include<iostream>
using namespace std;
class Average
{
	
		private :
			int a,b,c,avg;
		public :
			
			void get()
			{
				cout<<"Enter 3 numbers";
				cin>>a>>b>>c;
				avg = (a+b+c)/3;
			}
			void show()
			{
				cout<<"\n A ="<<a<<"\n B ="<<b<<"\n C ="<<c;
			}
			int show_data()
			{
				return(avg);
			}
			
};
class B : public Average
{
	
};
main()
{
	int ans;
	B b1;
	b1.get();
	b1.show();
	
	ans = b1.show_data();
	cout<<"\n Ans="<<ans;
	
	
}
