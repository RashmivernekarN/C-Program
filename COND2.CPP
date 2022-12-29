//program to check person eligible to vote or not using conditional operator

#include<iostream.h>
#include<conio.h>

void main()
{
   int age;
   clrscr();
   cout<<"\n enter age of the person";
   cin>>age;
   (age>=18)?cout<<"ELEIGIBLE TO VOTE":cout<<"NOT ELIGIBLE TO VOTE";
      getch();
}