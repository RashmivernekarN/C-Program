#include<iostream.h>
#include<conio.h>
void main()
{
	int p;
	clrscr();
	cout<<"Enter percentage of the student";
	cin>>p;

	if(p>=85)
		cout<<"\nDistinction";
	else if(p>=60 && p<85)
		cout<<"\nFirst Class";
	else if(p>=50 && p<60)
		cout<<"\nSecond Class";
	else if(p>=35 && p<50)
		cout<<"\nPASS";
	else if(p<35)
		cout<<"\nFAIL";
	else
		cout<<"\nERROR.........!";

	getch();
}