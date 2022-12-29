/*program to check result of a student using if else if*/
#include <iostream.h>
#include <conio.h>
void main()
{
 int per;
 clrscr();
 cout<<"\n Enter percentage";
 cin>>per;
 if(per>=80)
   cout<<"\n Distinction";
 else if(per>=60)
 cout<<"\n First Class";
 else if(per>=50)
 cout<<"\n Second Class";
 else if(per>=35)
 cout<<"\n Just pass";
 else
 cout<<"\n Fail";
 getch();
}