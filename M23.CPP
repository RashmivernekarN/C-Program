/*program to read a character and check whether given character is a
alphabet, digit or a special character using built in functions*/
#include <iostream.h>
#include <conio.h>
#include<ctype.h>
void main()
{
  char ch;
  clrscr();
  cout<<"\n Enter any character";
  cin>>ch;
  if(isalpha(ch))
    cout<<ch<<" is a alphabet";
  else if(isdigit(ch))
    cout<<ch<<" is a digit";
  else
    cout<<ch<<" is a special character";
  getch();
}