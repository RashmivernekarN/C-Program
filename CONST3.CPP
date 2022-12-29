//illustration of constructor(parameterised constructor)
#include<iostream.h>
#include<conio.h>
class xyz
{
    int a,b;
    public:xyz(int p,int q)
	    {
	       a=p;
	       b=q;
	    }
	     void display()
	     {
		 cout<<"\n\ta="<<a<<"\n\tb="<<b;
	      }
};
void main()
{
    clrscr();
    xyz x(10,20);//implicit call
    xyz y=xyz(100,200); //explicit call
    cout<<"\nwith object X";
    x.display();
    cout<<"\nwith object Y";
    y.display();
    getch();
}
