//program to illustrate class(with multiple objects)
#include<iostream.h>
#include<conio.h>
class student
  {
      private:int rl_no;
	      float per;
	      char name[20];
      public: void getdata()
	      {
		 cout<<"\n\n\tenter values for rl_no and per name";
		 cin>>rl_no>>per>>name;
	       }
	       void putdata();
   };
    void student::putdata()
   {
      cout<<"\n\trollno="<<rl_no<<"\n\tper="<<per<<"\n\tname="<<name;
   }
    void main()
   {
       student s1,s2;
       clrscr();
       cout<<"\n\tenter first student details";
       s1.getdata();
       cout<<"\n\tenter second student details";
       s2.getdata();
       cout<<"\n\t first student details are\n";
       s1.putdata();
       cout<<"\n\tsecond student details are\n";
       s2.putdata();
       getch();
    }



