//program display employee salary slip using class

#include<iostream.h>
#include<conio.h>

class emp
{
    int e_id;
    char e_name[20];
    float  basic,hra,da,gross,pf,net;
   public:
	  void getinfo();
	  void display();
	  void salary();
};
void emp::getinfo()
{
   cout<<"\n enter emp id   emp name and basic salary";
   cin>>e_id>>e_name>>basic;
}
void emp::salary()
{
   hra=basic*16/100;
   da=basic*12/100;
   gross=basic+hra+da;
   pf=basic*32/100;
   net=gross-pf;
}
void emp::display()
{
    cout<<"\n\temp_id\temp_name\tbasic\thra\tda\tgross\tpf\tnet\n";
    cout<<"\n\t-------------------------------------------------------------\n";
    cout<<"\n\t"<<e_id<<"\t"<<e_name<<"\t\t"<<basic<<"\t"<<hra<<"\t";
    cout<<da<<"\t"<<gross<<"\t"<<pf<<"\t"<<net<<"\n\n";
}
void main()
{
    emp e;
    clrscr();
    e.getinfo();
    e.salary();
    e.display();
    getch();
}

