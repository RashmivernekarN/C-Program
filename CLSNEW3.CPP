#include<iostream.h>
#include<conio.h>

class bank
{
   int b_no;
   char b_name[20];
   char auther[20];
   char pub[20];
   public: void getdata();
	   void putdata();
};
void bank::getdata()
{
   cout<<"\nenter book information";
   cout<<"\nenter book number book name book auther publication";
   cin>>b_no>>b_name>>auther>>pub;
}
void bank::putdata()
{
    cout<<"\n********book info**********\n";
    cout<<"\n\t book number"<<b_no;
    cout<<"\n\tbook name="<<b_name;
    cout<<"\n\tbook auther="<<auther;
    cout<<"\n\tpublication"<<pub;
}
void main()
{
   bank b1,b2;
   clrscr();
   b1.getdata();
   b2.getdata();
    b1.putdata();
   b2.putdata();
   getch();
}
