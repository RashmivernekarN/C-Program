//program to swap 2 variables

 #include<iostream.h>
 #include<conio.h>

 void main()
  {
     int a,b,temp;
     clrscr();
     cout<<"\n\tenter values for a and b";
     cin>>a>>b;
     cout<<"\n\tBEFORE SWAPPING THE VALUES ARE\n\t";
     cout<<"a="<<a<<"\n\tb="<<b;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"\n\tAFTER SWAPPING THE VALUES ARE\n\t";
     cout<<"a="<<a<<"\n\tb="<<b;
     getch();
}


