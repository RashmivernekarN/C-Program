//prg to find the length of  a  given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int len=0;
  char str[20];
  clrscr();
  printf("\n Enter any string");
  gets(str);
  len=strlen(str);
  printf("\n Length of given string is %d",len);
  getch();
}
