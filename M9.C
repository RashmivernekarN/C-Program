 /*prg to check whether the given num is a +ve  no or -ve num
 using conditional operator */
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int n;
      clrscr();
      printf("\n Enter any num");
      scanf("%d",&n);
      (n>0)?printf("\n %d is a +ve no",n):printf("\n %d is a -ve no",n);
      getch();
    }