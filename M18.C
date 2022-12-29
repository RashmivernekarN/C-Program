 /*prg to demo pfand sf*/
 #include<stdio.h>
 #include<conio.h>
 #define pf printf
 #define sf scanf

 void main()
   {
     float a,b,c,sum,avg;
     clrscr();
     pf("\n Enter three nums");
     sf("%f%f%f",&a,&b,&c);
     sum=a+b+c;
     avg=sum/3;
     pf("\n sum of 3 nums=%f",sum);
     pf("\n average of 3 nums=%f",avg);

     getch();
   }