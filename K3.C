/*prg to read a string and find the length of given string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
  {
    char str[20];
    clrscr();
    printf("\n Enter any string ");
    gets(str);
    printf("\n Entered string is %s ",str);
    printf("\n Length of given string is %d ",strlen(str));

    getch();
  }