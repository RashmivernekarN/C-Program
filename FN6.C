//prg to find  area of a rectangle using sub program
#include<stdio.h>
#include<conio.h>
float ar; //global variable
float area(float,float); //prototype declaration
void main()
  {
    float b,l;  //local variable
    clrscr();
    printf("\n Enter length and breadth");
    scanf("%f%f",&l,&b);
    ar=area(l,b);
    printf("\n Area of a rectangle=%f",ar);
    getch();
  }
  float area (float x,float y)         //formal variables
    {
      ar=x*y;
      return(ar);
     }