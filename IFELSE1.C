//program to check person is elegible to vote or not

#include<stdio.h>
#include<conio.h>

void main()
{
   int age;
   clrscr();
   printf("\nenter age of the person");
   scanf("%d",&age);
   if(age>=18)
   {
      printf("\nEligible to VOTE");
   }
   else
   {
     printf("\n NOT eligible to VOTE");
     }
	getch();
}