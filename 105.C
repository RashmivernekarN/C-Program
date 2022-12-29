//prg to  convert upper case  string to lower case
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[20];
  clrscr();
  printf("\n Enter any string");
  gets(str);
  strlwr(str);
  printf("\n Lower case string is %s",str);
  strupr(str);
  printf("\n Upper case string is %s",str);

  getch();
}