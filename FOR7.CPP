/*program to print following pattern
* * *
* * *
* * *
*/
#include<iostream.h>
#include<conio.h>
void main()
 {
  int r,c;
  clrscr();
  cout<<endl;
  for(r=1;r<=3;r++)
   {
    for(c=1;c<=3;c++)
     {
      cout<<"\t"<<"*";
     }
     cout<<"\n";
   }
  getch();
  }