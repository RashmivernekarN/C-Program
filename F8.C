  /*prg to find sum of 1 to n nums using sub program*/
  #include<stdio.h>
  #include<conio.h>
  int sum(int);
  void main()
    {
      int n,s;
      clrscr();
      printf("\n Enter any num");
      scanf("%d",&n);
      s=sum(n); //calling function
      printf("\n sum of 1 to nums =%d",s);
      getch();

    }
    int sum(int x)  //called function
      {
	int i=1,s=0;
	 while(i<=x)
	   {
	     s=s+i;
	   }
	return(s);
      }