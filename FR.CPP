//program to illustrate friendly function with 2 classes
//find average of two numbers using friend function

#include<iostream.h>
#include<conio.h>
class sample
{
   int a;
   int b;
   public:void setvalue()
	  {
	      cout<<"\n\n\tenter value for a and b";
	      cin>>a>>b;
	  }
	  friend float mean(sample s);
};
class sample1
{
   int a1;
   int b1;
   public:void setvalue1()
	  {
	      cout<<"\n\n\tenter value sfor a1 and b1";
	      cin>>a1>>b1;
	  }
	  friend float mean(sample1 s1);
};
float mean(sample s)
{
    return(float(s.a+s.b)/2.0);
}
float mean(sample1 s1)
{
    return((s1.a1+s1.b1)/2);
    }
void main()
{
    sample1 x1;
    sample x;
    clrscr();
    x.setvalue();
    x1.setvalue1();
    cout<<"\n\tmean value is"<<mean(x);
     cout<<"\n\tsum value is"<<mean(x1);
    getch();
}

