#include<iostream.h>
#include<conio.h>
inline float area(float b,float h )
{
	return(0.5*b*h);
}
void main()
{
	float x,y,z[5];
	clrscr();
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter x,y values";
		cin>>x>>y;
		z[i]=area(x,y);
		cout<<"\n area= "<<z[i];
	}
getch();
}