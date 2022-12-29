//program to demonstrate objecats as oranguments
#include<iostream.h>
#include<conio.h>
class time
{
int hours;
int minutes;
public:
void gettime(int h,int m)
{
hours=h;
minutes=m;
}
void puttime(void)
{
cout<<hours<<"hors and";
cout<<minutes<<"minuter"<<"\n";
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
minutes=t1.minutes; t2.minutes;
hours=minutes/60;
minutes=minutes%60;
hours=hours+t1.hours+t2.hours;
}
void main()
{
time t1,t2,t3;
t1.gettime(2,45);
t2.gettime(3,30);
t3.sum(t1,t2);
clrscr();
cout<<"t1=";t1.puttime();
cout<<"t2=";t2.puttime();
cout<<"t3=";t3.puttime();
getch();
}
