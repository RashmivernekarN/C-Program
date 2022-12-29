//program to display grade of the student depends on there marks.
#include<iostream.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	cout<<"\n\tEnter marks of the student";
	cin>>m;
	if(m>=90)
		cout<<"\n\tA Grade";
	else if(m>=80 && m<90)
		cout<<"\n\tB Grade";
	else if(m>=70 && m<80)
		cout<<"\n\tC Grade";
	else if(m>=60 && m<70)
		cout<<"\n\tD Grade";
	else if(m>=50 && m<60)
		cout<<"\n\tE Grade";
	else
		cout<<"\n\tF Grade";
	getch();
}