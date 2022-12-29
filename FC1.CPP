//fun with return value without argument
#include<iostream.h>
#include<conio.h>
int a,b,sum;//global variables
int addition(); //prototype declaration
void main()
{
    clrscr();
    sum=addition();//function call
    cout<<"\n\tsum="<<sum;
    getch();
}
int addition()
{
   cout<<"\n\t enter 2 integers";
   cin>>a>>b;
   sum=a+b;
   return(sum);
}
