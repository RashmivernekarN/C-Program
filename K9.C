/*prg to read a string and check whether the given string is palindrome or
not */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
  {
    char str1[20],str2[20];
    clrscr();
    printf("\n Enter any string ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2)==0)
    printf("\n Given string is a palindrome");
    else
    printf("\n Given string is not a palindrome");
    getch();
  }