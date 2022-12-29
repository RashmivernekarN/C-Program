 /*prg to check whether the given num is a even no or odd
 using conditional operator */
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int n;
      clrscr();
      printf("\n Enter any num");
      scanf("%d",&n);
      (n%2==0)?printf("\n %d is a even no",n):printf("\n %d is a odd no",n);
      getch();
    }