/*prg to read two strings and concatenate both the strings */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
  {
    char str1[20],str2[20];
    clrscr();
    printf("\n Enter first string ");
    gets(str1);
    printf("\n Enter second string ");
    gets(str2);

    printf("\n Concatenated string is %s ",strcat(str1,str2));

    getch();
  }