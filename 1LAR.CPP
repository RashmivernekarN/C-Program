#include<iostream.h>
#include<conio.h>
int lar(int x,int y);
void main()
{
    int a,b,c;
    clrscr();
    cout<<"Enter 2 nu";
    cin>>a>>b;
    c=lar(a,b);
    cout<<"largest of 2 numbers ="<<c;
    getch();
}
int lar(int x,int y)
{
   int z;
   z=(x>y?x:y);
   return(z);
}
