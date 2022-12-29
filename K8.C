/*prg to read two strings and check whether both the strings
are same or not */
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
    if(strcmp(str1,str2)==0)
	    printf("\n both the strings are equal");
    else
	    printf("\n both the strings are not equal");
    getch();
  }