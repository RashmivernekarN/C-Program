/*prg to read a string and copy it into another string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
  {
    char str1[20],str2[20];
    clrscr();
    printf("\n Enter any string ");
    gets(str1);
    printf("\n Entered string is %s ",str1);
    printf("\n Copied string is %s ",strcpy(str2,str1));

    getch();
  }