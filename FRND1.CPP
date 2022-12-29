//program to illustrate friendly function
//find area of triangle using friendy function
#include<iostream.h>
#include<conio.h>
class sample
{
   float b;
   float h;
   public:void setvalue()
	  {
	      cout<<"\n\n\tenter values for b and h";
	      cin>>b>>h;
	  }
	  friend float area(sample s);
};
float area(sample s)
{
    return(0.5*(s.b)*(s.h));
}
void main()
{
    sample x;
    clrscr();
    x.setvalue();
    cout<<"\n\tarea of triangle is"<<area(x);
    getch();
}

