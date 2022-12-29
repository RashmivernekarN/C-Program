#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char ch;
clrscr();
printf(" enter any character ");
scanf("%c",&ch);
if(isalpha(ch))
printf(" %c is a alphabet ",ch);
else if(isdigit(ch))
printf(" %c is a digit",ch);
else
printf(" %c is a special character",ch);
getch();
}