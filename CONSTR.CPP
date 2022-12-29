//program to illustrate constructor
#include<iostream.h>
#include<conio.h>
class example
{
       int a,b;
       public:example();//constructor declaration
	      void display();
};
example::example()
{
   cout<<"\n\tenter 2 numbers";
   cin>>a>>b;
}
void example::display()
{
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
}
void main()
{
  clrscr();
   example e;
   e.display();
   getch();
}
