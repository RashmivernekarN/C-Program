//illustrate function overloading (find area of geometrical entities)

#include<iostream.h>
#include<conio.h>
int s,len,br;
float b,h,r;
void area(int );
void area(float  );
void area(int  ,int  );
void area(float  ,float  );

void main()
{
    clrscr();
    cout<<"\n\tenter side of the square";
    cin>>s;
    area(s);
    cout<<"\n\tenter rad of circle";
    cin>>r;
    area(r);
    cout<<"\n\tenter length and breadth of rectangle";
    cin>>len>>br;
    area(len,br);
    cout<<"\n\tenter base and height of triangle";
    cin>>b>>h;
    area(b,h);
    getch();
}
void area(int s)
{
   cout<<"\n\tarea of square is="<<s*s;
}
void area(float r)
{
    cout<<"\n\tarea of circle="<<3.142*r*r;
}
void area(int l ,int  b)
{
   cout<<"\n\tarea of rectangle="<<l*b;
}
void area(float b,float h)
{
   cout<<"\n\tarea of triangle="<<0.5*b*h;
}





