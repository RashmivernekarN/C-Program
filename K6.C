/*prg to read a string and convert it to uppercase and lower
case string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
  {
    char str1[20];
    clrscr();
    printf("\n Enter any string ");
    gets(str1);
    printf("\n Entered string is %s ",str1);
    printf("\n Lower case string is %s ",strlwr(str1));
    printf("\n Upper case string is %s ",strupr(str1));
    getch();
  }