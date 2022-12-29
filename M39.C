  /*prg to demonstrate switch*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    { char ch;
      clrscr();
      printf("\n Enter any character");
      scanf("%c",&ch);
      switch(ch)
	{ case 'R':
	  case 'r':printf("\n Red");
		   break;
	  case 'G':
	  case 'g':printf("\n Green");
		   break;
	  case 'B':
	  case 'b':printf("\n Blue");
		   break;
	  default: printf("\n Invalid choice");
	}      getch();    }