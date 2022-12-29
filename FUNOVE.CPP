#include<iostream.h>
#include<conio.h>
void repchar();
void repchar(int);
void repchar(char  ,int);
void repchar(char);

void main()
{
   int n,n1;
   char ch1,ch;
   clrscr();
   cout<<"\n\thow many times you want to print *";
   cin>>n;
   repchar(n);
   cout<<"\nenter any character";
   cin>>ch;
   cout<<"\n\thow many times you want to print"<<ch;
   cin>>n1;
   repchar(ch,n1);
   cout<<"\n\t45 times *\n";
   repchar();
   cout<<"\nenter any character to display 45 times";
   cin>>ch1;
   cout<<"\n\t45 times "<<ch1<<"is\n";
   repchar(ch1);
    getch();
}
void repchar()
{
   for(int i=0;i<45;i++)
      cout<<"\t*";
}
void repchar(char r)
{
   for(int i=0;i<45;i++)
      cout<<"\t"<<r;
}
void repchar(int x)
{
   for(int i=0;i<x;i++)
      cout<<"\t*";
}
void repchar(char y,int z)
{
    for(int i=0;i<z;i++)
       cout<<"\t"<<y;
}
