/*program to create class called employee,data members of the class are
emp_id emp_name designation and basic salary - use appropriate member
functions to accept and display employee information*/
#include<iostream.h>
#include<conio.h>
class employee
{
   private:int emp_id;
	   char ename[20];
	   char desg[20];
	   float bs;
    public:void getdata();
	   void putdata();
};
void employee::getdata()
{
   cout<<"\n\tenter values for emp_id name desg basic sal";
   cin>>emp_id>>ename>>desg>>bs;
}
void employee::putdata()
{
   cout<<"\n\temployee id="<<emp_id<<"\n\temp name="<<ename;
   cout<<"\n\tdesignation="<<desg<<"\n\tbasic salary="<<bs;
}
void main()
{
   employee e;
   clrscr();
   e.getdata();
   e.putdata();
   getch();
}