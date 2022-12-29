//program to illustrate hierarchical inheritance
#include<iostream.h>
#include<conio.h>


class student
{
long int reg_no;
   char name[20];
   public:void getdata();
	  void putdata();
};
class arts:public student
{
   int rl_no;
   float per;
   public:
	   void accept();
	   void print();
};
class engg:public student
{
   char result[20];
   public:void getr();
	  void putr();
};

class medical:public student
{
public: int tot_m;
	void get_m();
	void put_m();
};
void student::getdata()
{
    cout<<"enter reg_no and name";
    cin>>reg_no>>name;
}
void student::putdata()
{
   cout<<"\nwe ar in base class";
   cout<<"\nreg no="<<reg_no;
   cout<<"\nname="<<name;
}
 void arts::accept()
 {
   cout<<"\n\nenter roll_no and per";
   cin>>rl_no>>per;
 }
 void arts::print()
 {
      cout<<"\nwe ar in derived:arts class";
     cout<<"\n\nrl_no:"<<rl_no;
     cout<<"\n\nper:"<<per;
 }
 void engg::getr()
 {
    cout<<"enter result";
    cin>>result;
 }
 void engg::putr()
 {
      cout<<"\nwe ar in derived engg class";
   cout<<"\n\nresult="<<result;
 }
 void medical::get_m()
 {
   cout<<"enter total marks";
   cin>>tot_m;
 }
 void medical::put_m()
 {
       cout<<"\nwe ar in derived medical class";
    cout<<"\n\ntotal marks="<<tot_m;
 }
void main()
{
   arts a;
   engg e;
   medical m;
   clrscr();
   a.accept();
   a.getdata();
   e.getr();
   m.get_m();
   a.putdata();
   a.print();
   e.putr();
   m.put_m();
   getch();
}

