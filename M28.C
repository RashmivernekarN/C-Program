/*prg to swap two nums without using dummy variable*/
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int a,b;
     clrscr();
     printf("\n Enter 2 nums");
     scanf("%d%d",&a,&b);
     printf("\n Before swapping a=%d \t b=%d",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\n After swapping a=%d \t b=%d",a,b);
     getch();
   }