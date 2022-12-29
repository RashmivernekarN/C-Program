//swap two variables using friend function

#include<iostream.h>
#include<conio.h>

class sample
{
    int x,y;
    public: void accept()
	    {
	       cout<<"\nenter values for x and y";
	       cin>>x>>y;

	      }
	     void display()
	     {
		cout<<"\n\t before swapping values are";
		cout<<"\n\tx="<<x<<"\n\ty="<<y;
	     }
	      friend void swap(sample  );
};

void swap(sample p)
{
   int t;
   t=p.x;
   p.x=p.y;
   p.y=t;
   cout<<"\n\t after swapping values are";
  cout<<"\n\tx="<<p.x<<"\n\ty="<<p.y;
  }

 void main()
 {
    sample z;
    clrscr();
    z.accept();
    z.display();
    swap(z);
    getch();
}




