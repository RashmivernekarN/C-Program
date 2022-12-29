//program to illustrate multiple inheritance

#include<iostream.h>
#include<conio.h>

class king
{
    char name[30];
    int age;
    public:void getdata()
	    {
	       cout<<"\n\tenter name and age";
	       cin>>name>>age;
	    }
	    void display()
	    {
		cout<<"\n\tname="<<name<<"\n\tage="<<age;
	     }
};
class queen
{
    char hobby[30];
    int height;
    public:void accept()
	    {
	       cout<<"\n\tenter hobby and height";
	       cin>>hobby>>height;
	    }
	    void printdata()
	    {
		cout<<"\n\thobby="<<hobby<<"\n\theight="<<height;
	     }
};
class prince:public king,public queen
{
    public:void input()
	   {
	       getdata();
	       accept();
	   }
	   void output()
	   {
		display();
		printdata();
	    }
};
void main()
{
   prince p,k;
   clrscr();
   cout<<"\n\tenter prince details";
   p.input();
   cout<<"\n\tprince details are";
   p.output();
      cout<<"\n\tenter king details";
   k.input();
   cout<<"\n\tking details are";
   k.output();
   getch();
}




