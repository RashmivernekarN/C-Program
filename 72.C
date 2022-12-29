/* prg to print below format
 *
 * *
 * * *
 * * * *
*/
#include<stdio.h>
  #include<conio.h>
  void main()
  {
    int r,c;
    clrscr();
    printf("\n The pattern is: \n");
    for(r=1;r<=4;r++)
     {
      for(c=1;c<=r;c++)
       {
	 printf("\t *");
       }
       printf("\n");
     }
     getch();
   }