  /*prg to perform basic arithmetic operations using switch*/
  #include<stdio.h>
  #include<conio.h>
  #include<ctype.h>
  void main()
    {
      int n1,n2,res;
      char ch;
      clrscr();
      printf("\n Enter any two nums");
      scanf("%d%d",&n1,&n2);
      fflush(stdin);
      printf("\n Enter your choice");
      scanf("%c",&ch);
      switch(ch)
	{
	  case '+':res=n1+n2;
		   break;
	  case '-':res=n1-n2;
		   break;
	  case '*':res=n1*n2;
		   break;
	  case '/':res=n1/n2;
		   break;
	  default: printf("\n Invalid choice");

	}
	 printf("\n Result=%d",res);
	getch();
    }