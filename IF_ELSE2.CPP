//check whether the student is pass or fail in subject

#include<iostream.h>
#include<conio.h>

void main()
{
  int marks;
  clrscr();
  cout<<"\n\tenter marks of student";
  cin>>marks;
  if(marks>=35)
     cout<<endl<<"\tPASS";
  else
	 cout<<endl<<"\tFAIL";
  getch();
}

