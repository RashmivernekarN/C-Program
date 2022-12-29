/*program to read  array elements and print the same*/
#include <iostream.h>
#include <conio.h>
void main()
{
 int m,n,a[10][10],i,j;
 clrscr();
 cout<<"enter row and col size";
 cin>>m>>n;
 cout<<"\n enterthe ele of matrix";

 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 cin>>a[i][j];
 }
 }

 cout<<"\n entered ele are:\n";
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 cout<<"\t"<<a[i][j];
 }
 cout<<"\n";
 }
 getch();
}