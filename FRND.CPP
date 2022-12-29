//program to illustrate friendly function
//find average of two numbers using friend function

#include<iostream.h>
#include<conio.h>
class sample
{
   int a;
   int b;
   public:void setvalue()
	  {
	      cout<<"\n\n\tenter values for a and b";
	      cin>>a>>b;
	  }
  friend float mean(sample s);
 };
float mean(sample s)
{
    return(float(s.a+s.b)/2.0);
}
void main()
{
    sample x;
    clrscr();
    x.setvalue();
    cout<<"\n\tmean value is"<<mean(x);
    getch();
}

