/*program to read N array elements and search an element in an array*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int a[50],i,n,f=0,key;
 clrscr();
 cout<<"\n\t Enter the limit";
 cin>>n;
 cout<<"enter the array element";
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"\n enter a search key";
 cin>>key;
 for(i=0;i<n;i++)
 {
 if(a[i]==key)
 {
 f=1;
 break;
 }
 }
 if(f==1)
 cout<<"\n search key is found ";
 else
 cout<<"search key is not found";
 getch();
 }
