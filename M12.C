 /*prg to find the biggest of two nums
 using conditional operator */
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a,b,lar;
      clrscr();
      printf("\n Enter two nums");
      scanf("%d%d",&a,&b);
      lar=(a>b)?a:b;
      printf("\n Biggest of two nums=%d",lar);
      getch();
    }