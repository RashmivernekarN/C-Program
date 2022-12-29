/*prg to read N array elements and find a searh key and check
how many times search key is present in array*/
#include<iostream.h>
#include<conio.h>
int main()
  {
    int a[50],n,i,key,f=0;
    clrscr();
    cout<<"\n Enter the limit";
    cin>>n;
    cout<<"\n Enter elements";
    for(i=0;i<n;i++)
     {
       cin>>a[i];
     }
    cout<<"\n Enter key";
    cin>>key;

    for(i=0;i<n;i++)
     {
       if(a[i]==key)
	 {
	 f++;
	 }
     }
    cout<<"\n Key is found "<<f<<"times";
    getch();
 }