/*prg to find area of a rectangle*/
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     float area,b,l;
     clrscr();
     printf("\n Enter length and breadth");
     scanf("%f%f",&l,&b);
     area=l*b;
     printf("\n Area of a rectangle =%f",area);
     getch();
   }