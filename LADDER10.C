//display day name by using day code(ladder if illustration)
#include<stdio.h>
#include<conio.h>

void main()
{
   int dc;
   clrscr();
   printf("\n\tenter daycode");
   scanf("%d",&dc);
   if(dc==1)
     printf("\n\tSUNDAY");
  else if(dc==2)
     printf("\n\tMONDAY");
       else if(dc==3)
     printf("\n\tTUESDAY");
       else if(dc==4)
     printf("\n\tWEDNESDAY");
       else if(dc==5)
     printf("\n\tTHURSDAY");
       else if(dc==6)
     printf("\n\tFRIDAY");
       else if(dc==7)
     printf("\n\tSATURDAY");
     else
	 printf("\n\tENTER VALID DAY CODE");
	 getch();
}
