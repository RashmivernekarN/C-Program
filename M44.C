  /*prg to  print nums in reverse order*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[5]={18,25,34,46,56};
      int i,num,num1,rev[5];
      clrscr();
      for(i=0;i<5;i++)
	{
	num=0;
	 num1=a[i];
	 while(num1!=0)
	   {
	     num=num*10;
	     num=num+num1%10;
	     num1=num1/10;
	   }
	   rev[i]=num;
	}
	printf("\n Given nums are:");
	for(i=0;i<5;i++)
	 {
	    printf("\n %d",a[i]);
	 }
	printf("\n Reversed nums are:");

	for(i=0;i<5;i++)
	 {
	    printf("\n %d",rev[i]);
	 }
	getch();
     }
