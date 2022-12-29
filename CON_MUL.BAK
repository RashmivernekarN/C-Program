//illustration of multiple constructor
#include<iostream.h>
#include<conio.h>
class sample
{
   int a,b,c;
   public:sample(){  }
	  sample(int x,int y);
	  sample(int z)
	  {  c=z;}
	  void display();
};
sample::sample(int x,int y)
{
  a=x;
  b=y;
}
void sample::display()
{
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c;
}
void main()
{   sample p;
    sample r(20,30);
    sample q(10);
    clrscr();
    p.display();
    getch();

}