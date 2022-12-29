//prg to reverse  a  given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[20];
  clrscr();
  printf("\n Enter any string");
  gets(str);
  strrev(str);
  printf("\n Reversed string is %s",str);
  getch();
}
