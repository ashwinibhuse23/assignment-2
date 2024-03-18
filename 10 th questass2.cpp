/*Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)*/

#include<iostream>
using namespace std;
class volume
{
    public:
    int  l;
    int  b;
    int  h;
    int vol;
    public:
    void read()
    {
        cout<<"\n Enter the length of box";
        cin>>l;
        cout<<"\n Enter the breadth of box";
        cin>>b;
        cout<<"\n Enter the height of the box";
        cin>>h;
        vol=l*b*h;
    }
    void show()
    {
        cout<<"\n The volume of the box="<<vol;
    }

};

main()
    {
    volume v1;
    v1.read();
    v1.show();
}
