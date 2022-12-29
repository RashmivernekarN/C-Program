/*prg to find m^n of given num using math function*/
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
   {
     int m,n,res;
     clrscr();
     printf("\n Enter the value of m and n");
     scanf("%d%d",&m,&n);
     res=pow(m,n);
     printf("\n m^n of given num =%d",res);
     getch();
   }