   /*Program to demonstrate conditional operators*/
  #include<iostream.h>
  #include<conio.h>
  void main()
    {
      int a,b;
      clrscr();
      cout<<"\n Enter two numbers";
      cin>>a>>b;
      int res=(a>b)?a:b;
      cout<<"\n Biggest of two nums="<<res;
      getch();
    }