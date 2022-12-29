//program to illustrate class

#include<iostream.h>
#include<conio.h>

class student
{
   private:int rl_no;
	    float per;
  public:void getdata()
	 {
	     cout<<"\nenter values for roll no and per";
	     cin>>rl_no>>per;
	  }
	  void putdata();
};
void student::putdata()
{
   cout<<"\n\troll no="<<rl_no<<"\n\tper="<<per;
}
void main()
{
    student s;
    clrscr();
    s.getdata();
    s.putdata();
    getch();
}


