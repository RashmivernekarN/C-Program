//to find simple interest using function

#include<stdio.h>
#include<conio.h>
void simple(float   ,float   ,float  );

void main()
{
  float a,b,c;
  clrscr();
  printf("\nenter values for principle amt time rate\n");
  scanf("%f%f%f",&a,&b,&c);
  simple(a,b,c);
  getch();
}
void simple(float p,float t,float r)
{
   printf("\nsimple interest=%f",(p*t*r)/100);
}




