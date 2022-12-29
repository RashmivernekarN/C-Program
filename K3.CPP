  /*Program to demonstrate aritmetic operators*/
  #include<iostream.h>
  #include<conio.h>
  void main()
    {
      float a,b,sum,sub,prod,div;
      clrscr();
      cout<<"\n Enter two nums";
      cin>>a>>b;
      sum=a+b;
      sub=a-b;
      prod=a*b;
      div=a/b;
      cout<<"\n Sum of two nums="<<sum;
      cout<<"\n Subtraction of two nums="<<sub;
      cout<<"\n Product of two nums="<<prod;
      cout<<"\n Division of two nums="<<div;
      getch();
    }