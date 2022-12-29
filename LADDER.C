//program to find biggest of 3 numbers

#include<stdio.h>
#include<conio.h>
 void main()
 {
   int a,b,c;
   clrscr();
   printf("\n\tenter values for a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b&&a>c)
      printf("\n\t%d is big",a);
   else if(b>a&&b>c)
	printf("\n\t%d is big",b);
   else if(c>a&&c>b)
	printf("\n\t%d is big",c);
   else
	printf("\n\tits not possible to say which is big");
    getch();
}


