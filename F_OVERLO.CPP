#include<iostream.h>
#include<conio.h>
void repchar();
void repchar(int);
void repchar(char  ,int);

void main()
{
   int n,n1;
   char ch;
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
    getch();
}
void repchar()
{
   for(int i=0;i<45;i++)
      cout<<"\t*";
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