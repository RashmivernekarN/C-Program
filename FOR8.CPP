/*program to print following pattern
*
* *
* * *
* * * *
*/
#include<iostream.h>
#include<conio.h>

void main()
 {
  int r,c;
  clrscr();
  cout<<endl;
  for(r=1;r<=4;r++)
   {
    for(c=1;c<=r;c++)
     {
      cout<<"\t"<<"*";
     }
     cout<<"\n";
   }
  getch();
 }