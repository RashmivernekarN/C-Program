//program to find the simple interest.
#include<iostream.h>
#include<conio.h>
class simple
{
private:
int p,t;
float r,si,a;
public:
void getdata()
{
cout<<"enter the value of principale amount:";
cin>>p;
cout<<"enter the time:";
cin>>t;
cout<<"enter the rate of interest:";
cin>>r;
}
void calc()
{
si=(p*t*r)/100;
a=p+si;
}
void show()
{
cout<<" simple interest:="<<si;
cout<<"\n        amount:="<<a;
}
};
void main()
{
simple s;
clrscr();
s.getdata();
s.calc();
s.show();
getch();
}

