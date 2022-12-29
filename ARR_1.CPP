//program to accept single dimensional array elements and display the same

#include<iostream.h>
#include<conio.h>

void main()
{
   int a[100],n,i;
   clrscr();
   cout<<"\nenter final value";
   cin>>n;
   cout<<"\nenter array elements";
   for(i=0;i<n;i++)
      cin>>a[i];
   cout<<"\narray elements are\n";
  for(i=0;i<n;i++)
      cout<<"\n\ta["<<i<<"]="<<a[i];
    getch();
}