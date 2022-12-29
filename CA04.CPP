
  //program to swap two variable using dummy variable
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a,b, temp;
      clrscr();
      printf("\n Enter  two numbers");
      scanf("%d%d",&a,&b);
      temp=a;
      a=b;
      b=temp;
      printf("\n after swaping a=%d \t  b=%d" ,a,b);
      getch();
      }

