//employee class(program to illustrate object as array)
#include<iostream.h>
#include<conio.h>

class employee
{
   private:int emp_id;
	    char emp_name[20];
	    char desg[20];
	    float basic,hra,da,gross,pf,net;
   public:void getdata();
	  void putdata();
	  void salary();
};
void employee::getdata()
{
   cout<<"\nenter employee id";
   cin>>emp_id;
   cout<<"\n\tenter emp name";
   cin>>emp_name;
   cout<<"\n\tenter emp designation";
   cin>>desg;
   cout<<"\n\tenter emp basic salary";
   cin>>basic;
}
void employee::putdata()
{
   cout<<"\n\t"<<emp_id<<"\t"<<emp_name<<"\t"<<desg;
}
void employee::salary()
{
   hra=basic*16/100;
   da=basic*32/100;
   gross=basic+hra+da;
   pf=basic*12/100;
   net=gross-pf;
cout<<"\n\t"<<emp_name<<"\t\t"<<basic<<"\t"<<hra<<"\t";
cout<<da<<"\t"<<gross<<"\t"<<pf<<"\t"<<net;
}

void main()
{
  employee e[5];
  int i;
  clrscr();
  cout<<"\nenter employee information";
  for(i=0;i<5;i++)
  {
  e[i].getdata();
  }
  cout<<"\n\temp_id\temp_name\tdesg";
  for(i=0;i<5;i++)
  {
  e[i].putdata();
  }
   cout<<"\n\n\t*************************SALARY****************************";
   cout<<"\n\temp_name\tbasic\thra\tda\tgross\tpf\tnet\n";
   cout<<"\n\t--------------------------------------------------------------";
     for(i=0;i<5;i++)
     {
      e[i].salary();
      }
  getch();
 }



