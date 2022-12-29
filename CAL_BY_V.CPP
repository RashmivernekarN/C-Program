//program to illustrate call by value and call by reference
#include<iostream.h>
#include<conio.h>
void addition(int ,int );
void product(int *,int *);
void main()
{
   int x,y;
   clrscr();
   cout<<"enter 2 integers";
   cin>>x>>y;
   addition(x,y);//call by val
   product(&x,&y);//call by ref
   getch();
}
void addition(int a,int b)
{
   cout<<"\n\n\t sum="<<a+b;
}
void product(int *p1,int *p2)
{
   cout<<"\n\tproduct="<<(*p1)*(*p2);
}

