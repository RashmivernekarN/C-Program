/*prg to calculate simple interest*/
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int p,t;
     float r,si;
     clrscr();
     printf("\n Enter p t r values");
     scanf("%d%d%f",&p,&t,&r);
     si=(p*t*r)/100;
     printf("\n simple interest =%f",si);
     getch();
   }