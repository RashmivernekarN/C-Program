//prg to  concatenate two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str1[20],str2[20];
  clrscr();
  printf("\n Enter first string");
  gets(str1);
  printf("\n Enter second string");
  gets(str2);

  strcat(str1,str2);
  printf("\n Concatenated string is %s",str1);
  getch();
}