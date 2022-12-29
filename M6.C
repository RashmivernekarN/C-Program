 /*prg to demonstrate increment operator */
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
       int i=10,j=20;
       clrscr();
       //pre increment method
       printf("\n Given i value=%d",i);
       printf("\n Incremented i value=%d",++i);

       //post increment method
       printf("\n Given j value=%d",j);
       printf("\n Incremented j value=%d",j++);
       printf("\n j=%d",j);


      getch();
    }