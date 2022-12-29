//program to illustrate class(with array as object)
#include<iostream.h>
#include<conio.h>
class student
  {
      private:int rl_no;
	      float per;
	      char name[20];
      public: void getdata()
	      {
		 cout<<"\n\n\t enter values for rl_no name and per";
		 cin>>rl_no>>name>>per;
	       }
	       void putdata();
   };
       void student::putdata()
   {
      cout<<"\n\t"<<rl_no<<"\t"<<name<<"\t  "<<per;
   }
      void main()
   {
       student s[5];
       int i;
       clrscr();
       cout<<"\n\tENTER 5 STUDENT DETAILS\n";
       for(i=0;i<5;i++)
       {
	   cout<<"\n\tenter"<<i+1<<" student details";
	   s[i].getdata();
	}
	cout<<"\n\tSTUDENT DETAILS ARE\n";
	cout<<"\n\tROLL NO\tNAME\t PERCENTAGE\n";
	for(i=0;i<5;i++)
	    s[i].putdata();
	  getch();
    }
