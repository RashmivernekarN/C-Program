  #include<iostream.h>
  #include<conio.h>
  void main()
  {
  int x,*p,*p2;
  clrscr();
  x=25;
  p=&x;
  p2=&p;
  cout<<"\n x value="<<x;
  cout<<"\n adress of x="<<p;
  cout<<"\n adress of p=%d"<<p2;
  getch();
  }