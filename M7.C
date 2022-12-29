 /*prg to demonstrate decrement operator */
  #include<stdio.h>
  #include<conio.h>
  void main()
    {  int i=10,j=20;
       clrscr();
       //prefix decrement method
       printf("\n Given i value=%d",i);
       printf("\n decremented i value=%d",--i);

       //postfix decrement method
       printf("\n Given j value=%d",j);
       printf("\n decremented j value=%d",j--);
       printf("\n j=%d",j);


      getch();
    }