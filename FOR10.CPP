/*prg to print following pattern
1
2 2
3 3 3
4 4 4 4
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
      cout<<"\t"<<r;
     }
     cout<<"\n";
   }
  getch();
 }