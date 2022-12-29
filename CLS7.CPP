//find sum and average of 3 numbers using class(nesting of member function)
#include<iostream.h>
#include<conio.h>
class sample
{
    int a,b,c,sum,avg;
    public:void getdata()
	   {
	      cout<<"\nenter values for a b c";
	     cin>>a>>b>>c;
	   }
	   void calc();
	   void display();
};
void sample::calc()
{
    sum=a+b+c;
    avg=sum/3;
    cout<<"\n\tsum="<<sum<<"\n\taverage="<<avg;
}
void sample::display()
{
    cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c;
    calc();
}
void main()
{
   sample s;
   clrscr();
   s.getdata();
   s.display();
    getch();
}