/*prg to perform basic arithmetic operations using switch*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   float a,b;
   int ch;
   clrscr();
   printf("\n Enter two nums");
   scanf("%f%f",&a,&b);
   printf("\n 1--->sum  \n 2--->subtraction \n 3--->product \n 4--->division");
   printf("\n Enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1: printf("\n sum=%f",(a+b));
	   break;
   case 2: printf("\n substraction=%f",(a-b));
	   break;
   case 3: printf("\n product=%f",(a*b));
	   break;
   case 4: printf("\n sum=%f",(a/b));
	   break;
   default:
	   printf("\n Invalid choice");
   }

   getch();
 }
