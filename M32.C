  /*prg to check whether the character is a alphabet
  or not using  if-else*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      char ch;
      clrscr();
      printf("\n Enter any character");
      scanf("%c",&ch);
      if(ch>='A' && ch<='Z' ||ch>='a' && ch<='z')
	{
	  printf("\n %c is alphabet",ch);
	}
      else
	{
	  printf("\n %c is not a alphabet",ch);
	}
	getch();
    }