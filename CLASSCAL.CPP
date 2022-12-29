// program to perform arithmetic operation using class
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class calc
 {
    private:int a,b,sum,diff,p;
	    float q;
	    int ch;
    public:void accept()
	   {
	      cout<<"\n\tenter values for a and b";
	      cin>>a>>b;
	  }
	   void display();
	   void menu();
};
void calc::menu()
{
cout<<"\n\t1.addition\n\t2.subtraction\n\t3.mult\n\t4.division\n\t5.exit\n";
}
void calc::display()
{
   cout<<"\n\nenter your choice";
   cin>>ch;
   switch(ch)
   {
      case 1:sum=a+b;
	     cout<<"\n\tsum="<<sum;
	     break;
      case 2:diff=a-b;
	     cout<<"\n\tdifference="<<diff;
	     break;
     case 3: p=a*b;
	     cout<<"\n\tproduct="<<p;
	     break;
     case 4:q=(float)a/(float)b;
	     cout<<"\n\tque="<<q;
	     break;
      case 5:exit(0);
     default:cout<<"\n\tENTER VALID CHOICE";
	     break;
   }
}
void main()
{
   calc c;
   int x;
   clrscr();
   c.accept();
   do
   {
   c.menu();
   c.display();
   cout<<"\n\tdo you want to continue[YES-1/NO-0]";
   cin>>x;
   }while(x==1);
   getch();
}
