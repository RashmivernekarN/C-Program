  /*prg to find sum of 2 nums using global variable*/
  #include<stdio.h>
  #include<conio.h>
  int sum;//global variable
  void main()//function main
    {
      int a,b; //local variables
      clrscr();    //clear screen function
      printf("\n Enter 2 nums");
      scanf("%d%d",&a,&b);
      sum=a+b;
      printf("\n sum of 2 nums=%d",sum);
      getch();
    }