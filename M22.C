/*prg to demonstrate mathematical functions*/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
   {
     float sn,cs,tn,n;
     clrscr();
     printf("\n Enter any no");
     scanf("%f",&n);
     sn=sin(n);
     cs=cos(n);
     tn=tan(n);
     printf("\n sin value of n =%f",sn);
     printf("\n cos value of n =%f",cs);
     printf("\n tan value of n =%f",tn);
     getch();
   }