//program to illustrate hybrid inheritance
#include<iostream.h>
#include<conio.h>

class person
{
   char name[30];
   int age;
   public:void getdata();
	  void display();
};
class student:public person
{
   char q[30];
   public:void read();
	  void print();
};
class teacher:public person
{
    int exp;
    public:void input();
	   void output();
};
class exam:public student
{
   int p;
   public:void read();
	  void print();
};
class talent
{
    public:char t[30];
	   void read();
	   void print();
};
class award:public exam,public talent
{
   public:void getdata();
	  void putdata();
};
void person::getdata()
{
   cout<<"\n\tenter name and age";
   cin>>name>>age;
}
void person::display()
{
   cout<<"\n\tname="<<name<<"\n\tage="<<age;
}
void student::read()
{
    person::getdata();
    cout<<"\n\tenter qual";
    cin>>q;
}
void student::print()
{
  person::display();
  cout<<"\n\tqualification="<<q;
}
void teacher::input()
{
   person::getdata();
    cout<<"\n\tenter exp";
    cin>>exp;
}
void teacher::output()
{
    person::display();
  cout<<"\n\texperience="<<exp;
}

void exam::read()
{
  student::read();
  cout<<"\n\tenter per";
  cin>>p;
}
void exam::print()
{
   student::print();
   cout<<"\n\tpercentage="<<p;
}
void talent::read()
{
   cout<<"\n\tenter talent";
   cin>>t;
}
void talent::print()
{
   cout<<"\n\ttalent="<<t;
}
void award::getdata()
{
   exam::read();
   talent::read();
}
void award::putdata()
{
   exam::print();
   talent::print();
}
void main()
{
   award a1;
   teacher t1;
   clrscr();
   cout<<"\n\tenter studentdetails";
   a1.getdata();
   cout<<"\n\tenter teacher details";
   t1.input();
   cout<<"\n\tstudent details are";
   a1.putdata();
   cout<<"\n\tteacher details are";
   t1.output();
   getch();
}