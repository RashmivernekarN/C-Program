//accept 2 single dimentional array elements and find sum of correspanding
//elements
#include<iostream.h>
#include<conio.h>

void main()
{
   int a[10],b[10],s[10],i,n;
   clrscr();
   cout<<"\n\tenter size of an array";
   cin>>n;
   cout<<"enter first array elements";
   for(i=0;i<n;i++)
      cin>>a[i];
  cout<<"enter second array elements";
   for(i=0;i<n;i++)
      cin>>b[i];
   cout<<"sum array\n";
   cout<<"\t\tA\tB\tSUM\n";
   for(i=0;i<n;i++)
   {
      s[i]=a[i]+b[i];
      cout<<"\t\t"<<a[i]<<"\t"<<b[i]<<"\t"<<s[i]<<"\n\n";
  }
  getch();
  }







